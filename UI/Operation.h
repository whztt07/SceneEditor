#ifndef _OPERATION_H_
#define _OPERATION_H_
#include "CommonObject.h"
#include "PolygonObject.h"
#include <QtCore/QFileInfo>

//标示操作类型
enum class OperType
{
	COMMON_EDIT, POLYGON_EDIT, CIRCLE_EDIT
};

//操作基类
class Operation
{
public:
	virtual bool exec() = 0;	//执行操作
	virtual bool undo() = 0;	//撤销操作
	virtual ~Operation() {}
	CC_SYNTHESIZE(OperType, m_type, OperType);
};

//普通编辑操作
class CommonEditOper : public Operation
{
public:
	//_type_name:对象的类型名
	//node:要添加到的层
	//point:对象的位置
	//path:图片文件的路径
	CommonEditOper(std::string _type_name, cocos2d::CCNode *node, cocos2d::CCPoint point, QFileInfo _file_info) :pos(point), layer(node), file_info(_file_info) 
	{ 
		setOperType(OperType::COMMON_EDIT); 
		type_name = _type_name;
	}
	bool exec()
	{
		sprite_object = CommonObject::create(CCSprite::create(file_info.absoluteFilePath().toLatin1().data()));
		sprite_object->setTypeName(type_name);
		sprite_object->setFileName(file_info.fileName().toLatin1().data());
		sprite_object->setPosition(pos);
		layer->addChild(sprite_object);
		
		return true;
	}

	bool undo()
	{
		sprite_object->removeFromParent();
		return true;
	}
private:
	QFileInfo	file_info;			//文件信息
	std::string  type_name;			//精灵类型
	cocos2d::CCNode *layer;			//添加到的层
	cocos2d::CCPoint pos;			//添加位置
	CC_SYNTHESIZE_READONLY(CommonObject*, sprite_object, CommonObject);	//操作的精灵对象
};

//多边形编辑操作
class PolygonEditOper : public Operation
{
public:
	PolygonEditOper(cocos2d::CCNode *node) :layer(node) { setOperType(OperType::POLYGON_EDIT); }
	bool exec()
	{
		polygon_object = PolygonObject::create(CCSprite::create());
		layer->addChild(polygon_object);
		return true;
	}

	bool undo()
	{
		polygon_object->removeFromParent();
		return true;
	}

	//对象的顶点数组增删操作
	bool pushPoint(cocos2d::CCPoint p) { return polygon_object->pushPoint(p); }
	bool popPoint()	{ return polygon_object->popPoint(); }
private:
	cocos2d::CCNode *layer;			//添加到的层
	CC_SYNTHESIZE_READONLY(PolygonObject*, polygon_object, PolyObject);	//操作的多边形对象
};

//圆形编辑操作
class CircleEditOper : public Operation
{
public:
	CircleEditOper(cocos2d::CCNode *node,cocos2d::CCPoint center, float radius = 10):layer(node), m_center(center), m_radius(radius) 
	{
		setOperType(OperType::CIRCLE_EDIT);
	}
	bool exec()
	{
		circle_object = CircleObject::create(CCSprite::create());
		circle_object->setCenterPoint(m_center);
		circle_object->setRadius(m_radius);
		layer->addChild(circle_object);
		return true;
	}

	bool undo()
	{
		circle_object->removeFromParent();
		return true;
	}

	void setRadius(float radius)
	{
		m_radius = radius;
		circle_object->setRadius(m_radius);
	}
private:
	cocos2d::CCNode *layer;			//添加到的层
	float	m_radius;
	CC_SYNTHESIZE_READONLY(CircleObject*, circle_object, CircleObject);	//操作的圆形对象
	CC_SYNTHESIZE_READONLY(cocos2d::CCPoint, m_center, CenterPoint); //圆心
};

#endif
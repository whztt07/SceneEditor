static const char *qstyle = R"(*{
  font-size:13px;
  color:white;
  font-family:"����";
}
CallWidget QLineEdit#telEdt
{
  font-size:24px;
}
QMainWindow,QDialog{
     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,
                                 stop: 0 #1B2534, stop: 0.4 #010101,
                                 stop: 0.5 #000101, stop: 1.0 #1F2B3C);
}
QWidget{
    background:#121922;
}
QLabel{
   background:transparent;
}
DailForm QLineEdit#phoneLineEdt{
  font-size:36px;
  font-weight: bold;
}
QPushButton,QToolButton{
    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,
                                 stop: 0 #5B5F5F, stop: 0.5 #0C2436,
                                 stop: 1.0 #27405A);
}
QPushButton::hover,QToolButton::hover{
    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,
                                 stop: 0 #758385, stop: 0.5 #122C39,
                                 stop: 1.0 #0E7788);
    border-color: #11505C;
}
QPushButton::pressed,QToolButton::pressed{
    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,
                                 stop: 0 #969B9C, stop: 0.5 #16354B,
                                 stop: 1.0 #244F76);
    border-color: #11505C;
}
QPushButton::disabled,QToolButton::disabled{
    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,
                                 stop: 0 #282B2C, stop: 0.5 #09121A,
                                 stop: 1.0 #111D29);
    border-color: #0A1320;
    color:#6A6864;
}

QDialog QPushButton,QDialog QToolButton{
  min-width:30px;
  min-height:23px;
}
QToolButton[objectName="minimizeToolBtn"] {
    background: transparent;
    border:none;
    image:url(qss/minimize.png)
}
QToolButton[objectName="minimizeToolBtn"]:hover,QToolButton[objectName="minimizeToolBtn"]:pressed {
    image:url(qss/minimize_hover.png)
}
QToolButton[objectName="maximizeToolBtn"] {
    background: transparent;
    border:none;
    image:url(qss/maximize.png)
}
QToolButton[objectName="maximizeToolBtn"]:hover,QToolButton[objectName="maximizeToolBtn"]:pressed {
    image:url(qss/maximize_hover.png)
}
QToolButton[objectName="closeToolBtn"],QToolButton[objectName="customCloseWindow"] {
    background: transparent;
    border:none;
    image:url(qss/close.png)
}
QToolButton[objectName="closeToolBtn"]:hover,QToolButton[objectName="closeToolBtn"]:pressed{
    image:url(qss/close_hover.png)
}
QToolButton[objectName="customCloseWindow"]:hover,QToolButton[objectName="customCloseWindow"]:pressed{
    image:url(qss/close_hover.png)
}
QToolButton[objectName="titleSetUpToolBtn"]{
    background: transparent;
    border:none;
    image:url(qss/setup.png)
}

DailForm QToolButton#oneToolBtn,QToolButton#OneToolBtn,QToolButton#twoToolBtn,QToolButton#threeToolBtn,
         QToolButton#fourToolBtn,QToolButton#fiveToolBtn,QToolButton#sixToolBtn,
         QToolButton#sevenToolBtn,QToolButton#eightToolBtn,QToolButton#nineToolBtn,
         QToolButton#starToolBtn,QToolButton#zeroToolBtn,QToolButton#sharpToolBtn {
    font-size:36px;
    border-radius: 10px;
}
DailForm QToolButton#delToolBtn{
    border-radius: 10px;
}

QFrame{
    border-color:#32435E;
    border-width:1px;
    border-radius: 3px;
}

QLineEdit,QTextEdit {
    border: 1px solid #32435E;
    border-radius: 3px;
    /* padding: 0 8px; */
    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,
                                 stop: 0 #080B10,
                                 stop: 1.0 #212C3F);
    selection-background-color: #0A246A;
}
QLineEdit::hover{
  border-color:#5D8B9E;
}
QLineEdit[echoMode="3"] {
     lineedit-password-character: 9679;
}
#QLineEdit:read-only {
     background: #543F7C;
}

QTabWidget::pane { /* The tab widget frame */
     border: 0px solid #32435E;
     position: absolute;
     left: -0.1em;
}
QTabWidget#MainTabWidget::tab-bar {
     left: -3px; /* move to the right by 5px */
}
QTabWidget#MainTabWidget QTabBar::tab {
     height: 14ex;
     width: 14ex;
}

QTabBar::tab {
     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,
                                 stop: 0 #292F31, stop: 1 #0C131E);
}
QTabBar::tab:selected{
     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,
                                 stop: 0 #113845,  stop: 1.0 #15A8FF);
}
QTabBar::tab:hover {
     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,
                                 stop: 0 #113845,  stop: 1.0 #0E6F80);
}
#QTabBar::tab:selected {
     border-color: #32435E;
     border-right-color: #32435E; /* same as pane color */
}
#QTabBar::tab:!selected {
     margin-left: 2px; /* make non-selected tabs look smaller */
}
#QTabBar:tab:first:selected {
    margin-top: 0;
}
QTabBar:tab:last:selected {
    margin-right: 0;
}
QTabBar:tab:only-one {
     margin: 0;
}
QListWidget{
    border: 1px solid #32435E;
    background:#050609;
}

QListWidget::item:selected {
     /*border: 0px solid #33CCFF;*/
     border:none;
     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,
                                 stop: 0 #6A848C,  stop: 1.0 #0F9EAF);
     padding:0px;
     margin:0px;
}
#QListWidget::item:selected:!active {
     border-width: 0px ;
}
#QListWidget::item:selected:active {
     border-width: 1px;
}


QComboBox::hover{
  border-color:#5D8B9E;
}

QComboBox:editable {
     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,
                                 stop: 0 #080B10,
                                 stop: 1.0 #212C3F);
}
QComboBox:!editable, QComboBox::drop-down:editable {
      background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,
                                 stop: 0 #080B10,
                                 stop: 1.0 #212C3F);
}
/* QComboBox gets the "on" state when the popup is open */
QComboBox:!editable:on, QComboBox::drop-down:editable:on {
     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,
                                 stop: 0 #080B10,
                                 stop: 1.0 #212C3F);;
}
QComboBox:on { /* shift the text when the popup opens */
     padding-top: 3px;
     padding-left: 4px;
}
QComboBox::drop-down {
     subcontrol-origin: padding;
     subcontrol-position: top right;
     width: 15px;
     border-left-width: 1px;
     border-left-color: 32435E;
     border-left-style: solid; /* just a single line */
     border-top-right-radius: 3px; /* same radius as the QComboBox */
     border-bottom-right-radius: 3px;
}
QComboBox::down-arrow {
     image: url(qss/downarrow.png);
}
QComboBox::down-arrow:on { /* shift the arrow when popup is open */
     top: 1px;
     left: 1px;
}
QComboBox QAbstractItemView {
     border: 2px solid #32435E;
     selection-background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,
                                 stop: 0 #506B79,
                                 stop: 1.0 #0D95A6);
    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,
                                 stop: 0 #1B2534, stop: 0.4 #010101,
                                 stop: 0.5 #000101, stop: 1.0 #1F2B3C);
})";
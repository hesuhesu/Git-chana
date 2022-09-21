import sys
from PyQt5.QtWidgets import * ## *은 전체를 가져온다는 뜻.
from PyQt5.QtGui import *
from PyQt5.QtCore import *

class MyApp(QWidget):

    def __init__(self):
        super().__init__()
        self.gui_1()
        
    def gui_1(self) :
        self.setWindowTitle('연습용 GUI')
        self.setWindowIcon(QIcon("C:\\Users\\user\\Desktop\\22년 2학기 프로그래밍 개발파일\\python 프로그래밍\\ext.png"))
        self.resize(400,400)
        self.center() # center method 활용. 중간에 창이 띄워짐.
        btn = QPushButton("확인", self)	# 버튼 텍스트
        btn.resize(200, 60)
        btn.move(100, 200)	# 버튼 위치
        btn.clicked.connect(self.btn_clicked)
        
    def btn_clicked(self) :
        QMessageBox.about(self, "message", "눌렀냐? 나간다")
        self.close()
    
    def center(self): # 윈도우 정중앙에 놓는 코드.
        qr = self.frameGeometry()
        cp = QDesktopWidget().availableGeometry().center()
        qr.moveCenter(cp)
        self.move(qr.topLeft())


if __name__ == '__main__' :
    app = QApplication(sys.argv)
    gui1 = MyApp() # 보여지는 윈도우 생성
    gui1.show()
    sys.exit(app.exec_()) # 닫기 까지 지속.

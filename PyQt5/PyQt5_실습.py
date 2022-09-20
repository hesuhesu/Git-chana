import sys
from PyQt5.QtWidgets import * ## *은 전체를 가져온다는 뜻.
from PyQt5.QtGui import *

class MyApp(QWidget):
    def __init__(self):
        super().__init__()
        self.gui_1()

    def gui_1(self) :
        self.setWindowTitle('연습용 GUI')
        self.setWindowIcon(QIcon('web.png'))
        self.setGeometry(500,300,600,300) # x,y,너비,높이
        self.show()

if __name__ == '__main__' :  # 실행 위치 판단여부.
    app = QApplication(sys.argv)
    gui1 = MyApp() # 보여지는 윈도우 생성
    app.exec_() # 닫기 까지 지속.

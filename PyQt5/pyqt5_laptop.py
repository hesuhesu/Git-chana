import sys
import time
import numpy as np
from PyQt5.QtWidgets import * ## *은 전체를 가져온다는 뜻.
from PyQt5.QtGui import *
from PyQt5.QtCore import *
from matplotlib.backends.backend_qt5agg import FigureCanvas as FigureCanvas
from matplotlib.backends.backend_qt5agg import NavigationToolbar2QT as NavigationToolbar
import webbrowser

class MyApp(QWidget):

    def __init__(self):
        super().__init__()
        self.setWindowTitle('사이트 모음 GUI')
        self.setWindowIcon(QIcon("C:\\Users\\user\\Desktop\\22년 2학기 프로그래밍 개발파일\\python 프로그래밍\\ext.png"))
        self.center() # center method 활용. 중간에 창이 띄워짐.
        

        url = "https://codetorial.net/articles/matplotlib_in_pyqt5.html"
        '''
        dynamic_canvas = FigureCanvas(Figure(figsize=(4, 3)))
        vbox.addWidget(dynamic_canvas)

        self.dynamic_ax = dynamic_canvas.figure.subplots()
        self.timer = dynamic_canvas.new_timer(
          100, [(self.update_canvas, (), {})])
        self.timer.start()

        '''

        
        self.btn_google()
        self.btn_naver()
        self.btn_myWeb()
        self.btn_exit()

    def btn_google(self) :
        btn = QPushButton("구글", self)	# 버튼 텍스트
        btn.resize(200, 60)
        btn.move(0, 0)	# 버튼 위치
        btn.clicked.connect(lambda: webbrowser.open('https://google.com'))

    def btn_naver(self) :
        btn = QPushButton("네이버", self)	# 버튼 텍스트
        btn.resize(200, 60)
        btn.move(200, 0)	# 버튼 위치
        btn.clicked.connect(lambda: webbrowser.open('https://naver.com'))

    def btn_myWeb(self) :
        btn = QPushButton("개발자 정적 홈페이지", self)	# 버튼 텍스트
        btn.resize(200, 60)
        btn.move(400, 0)	# 버튼 위치
        btn.clicked.connect(lambda: webbrowser.open('https://hesuhesu.netlify.app/'))

    def btn_exit(self) :
        btn = QPushButton("종료", self)	# 버튼 텍스트
        btn.resize(200, 60)
        btn.move(600, 0)	# 버튼 위치
        btn.clicked.connect(self.btn_clicked)
        
    def btn_clicked(self) :
        QMessageBox.about(self, "message", "종료합니다.")
        self.close()
    
    def center(self): # 윈도우 정중앙에 놓는 코드.
        qr = self.frameGeometry()
        cp = QDesktopWidget().availableGeometry().center()
        qr.moveCenter(cp)
        self.move(qr.topLeft())

    '''
        def update_canvas(self):
      self.dynamic_ax.clear()
      t = np.linspace(0, 2 * np.pi, 101)
      self.dynamic_ax.plot(t, np.sin(t + time.time()), color='deeppink')
      self.dynamic_ax.figure.canvas.draw()    
    '''
if __name__ == '__main__' :
    app = QApplication(sys.argv)
    gui1 = MyApp() # 보여지는 윈도우 생성
    gui1.showMaximized()
    sys.exit(app.exec_()) # 닫기 까지 지속.

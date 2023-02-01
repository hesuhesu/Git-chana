# 문제

어떤 파일 시스템에는 디스크 공간이 파일의 사이즈와 항상 같지는 않다. 이것은 디스크가 일정한 크기의 클러스터로 나누어져 있고, 한 클러스터는 오직 한 파일만 이용할 수 있기 때문이다.

예를 들어, 클러스터의 크기가 512바이트이고, 600바이트 파일을 저장하려고 한다면, 두 개의 클러스터에 저장하게 된다. 두 클러스터는 다른 파일과 공유할 수 없기 때문에, 디스크 사용 공간은 1024바이트가 된다.

파일의 사이즈와 클러스터의 크기가 주어질 때, 사용한 디스크 공간을 출력하는 프로그램을 작성하시오.

# 입력

첫째 줄에 파일의 개수 N이 주어진다. N은 50보다 작거나 같은 자연수이다. 둘째 줄에는 파일의 크기가 공백을 사이에 두고 하나씩 주어진다. 파일의 크기는 1,000,000,000보다 작거나 같은 음이 아닌 정수이다. 마지막 줄에는 클러스터의 크기가 주어진다. 이 값은 1,048,576보다 작거나 같은 자연수이다.

# 출력

첫째 줄에 사용한 디스크 공간을 출력한다.

[출처](https://www.acmicpc.net/problem/1350)
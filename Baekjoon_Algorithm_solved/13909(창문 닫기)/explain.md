# 문제

서강대학교 컴퓨터공학과 실습실 $R912$호에는 현재 $N$개의 창문이 있고 또 $N$명의 사람이 있다. 
$1$번째 사람은 $1$의 배수 번째 창문을 열려 있으면 닫고 닫혀 있으면 연다.  
$2$번째 사람은 $2$의 배수 번째 창문을 열려 있으면 닫고 닫혀 있으면 연다. 
이러한 행동을 $N$번째 사람까지 진행한 후 열려 있는 창문의 개수를 구하라. 단, 처음에 모든 창문은 닫혀 있다.

예를 들어 현재 $3$개의 창문이 있고 $3$명의 사람이 있을 때,

$1$번째 사람은 $1$의 배수인 $1,2,3$번 창문을 연다. $(1, 1, 1)$
$2$번째 사람은 $2$의 배수인 $2$번 창문을 닫는다. $(1, 0, 1)$
$3$번째 사람은 $3$의 배수인 $3$번 창문을 닫는다. $(1, 0, 0)$
결과적으로 마지막에 열려 있는 창문의 개수는 $1$개 이다.

# 입력

첫 번째 줄에는 창문의 개수와 사람의 수 $N(1 ≤ N ≤ 2,100,000,000)$이 주어진다.

# 출력

마지막에 열려 있는 창문의 개수를 출력한다.

[출처](https://www.acmicpc.net/problem/13909)

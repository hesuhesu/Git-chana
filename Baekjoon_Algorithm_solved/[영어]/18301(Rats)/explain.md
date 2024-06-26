# 문제

To celebrate the Lunar New Year of the Rat, Douglas decides to count the number of rats living in his area. It is impossible for him to find all rats, as they tend to be well hidden. However, on the first day of the new year, Douglas manages to capture $n_1$ rats, and marks each of them with an ear tag before releasing them. On the second day of the new year, Douglas captures $n_2$ rats, and observes that $n_{12}$ of them had been marked during the first day.

Douglas is asking for your help to estimate the total number of rats in his area. Looking up in your statistics textbook, you propose using the Chapman estimator $N$, given by:

$N := ⌊(n_1 + 1)(n_2 + 1)/(n_{12} + 1) - 1⌋$

where $⌊x⌋$ is the floor of a real number $x, i.e.,$ the closest integer less than or equal to $x$.

# 입력

The input consists of a single line, with three space-separated integers: $n_1, n_2, n_{12}$, in that order.

# 출력

The output should contain a single line with the single integer $N$.

# 제한

- $0 ≤ n_1, n_2 ≤ 10 000;$
- $0 ≤ n_{12} ≤ min(n_1, n_2).$

[출처](https://www.acmicpc.net/problem/18301)

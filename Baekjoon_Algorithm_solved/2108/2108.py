import sys
from collections import deque, Counter

dq = deque()
num = int(sys.stdin.readline())

for i in range(num) :
    dq.append(int(sys.stdin.readline()))

dq = sorted(dq)

count = Counter(dq).most_common(2)

print(round(sum(dq)/num))
print(dq[num//2])
if len(dq) > 1 :
    if count[0][1] == count[1][1] :
        print(count[1][0])
    else :
        print(count[0][0])
else :
    print(count[0][0])

print(max(dq) - min(dq))

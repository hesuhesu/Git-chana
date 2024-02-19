import sys

N, M, B = map(int, sys.stdin.readline().split())

dp = []
result = sys.maxsize
height = 0
for _ in range(N):
    dp.append(list(map(int, sys.stdin.readline().split())))

for floor in range(257):
    use_block = 0
    take_block = 0
    for i in range(N):
        for j in range(M):
            if dp[i][j] < floor :
                use_block += floor - dp[i][j]
            else :
                take_block += dp[i][j] - floor
    
    if take_block + B < use_block :
        continue
    time = 2 * take_block + use_block
    if time <= result :
        result = time
        height = floor
print(result, height)
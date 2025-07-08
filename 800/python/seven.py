t = int(input())
for _ in range(t):
    n, m = map(int, input().split())
    x = input().strip()
    s = input().strip()
    cnt = 0
    temp = x
    while s not in temp and len(temp) < 25:
        temp += temp
        cnt += 1
    if s in temp:
        print(cnt)
    else:
        print(-1)
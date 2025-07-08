t = int(input())
for _ in range(t):
    a, b, c, d = map(int, input().split())
    cnt = d - b
    newb = b + cnt
    newa = a + cnt
    if newa < c or cnt < 0:
        print(-1)
    else:
        print(cnt + (newa - c))
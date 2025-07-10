t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    print(' '.join(str(n + 1 - a) for a in arr))
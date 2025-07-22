import sys

input = sys.stdin.readline

t = int(input())
for _ in range(t):
        n, k = map(int, input().split())
        a = list(map(int, input().split()))
        pointer = n * k
        ans = 0
        for _ in range(k):
            pointer -= (n // 2 + 1)
            ans += a[pointer]
        print(ans)

import sys


input = sys.stdin.readline

t = int(input())
for _ in range(t):
        n = int(input())
        arr = [0] + list(map(int, input().split()))
        ans = 0
        for i in range(1, n + 1):
            if arr[i] > 0 and arr[i - 1] == 0:
                ans += 1
        print(min(ans, 2))

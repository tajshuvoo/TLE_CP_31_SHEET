import sys

input = sys.stdin.readline

t = int(input())
for _ in range(t):
        a, b, n = map(int, input().split())
        arr = list(map(int, input().split()))
        total = sum(min(x, a - 1) for x in arr)
        print(total + b)

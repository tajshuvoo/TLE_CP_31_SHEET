import sys

input = sys.stdin.readline

t = int(input())
for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        count_one = a.count(1)
        count_zero = a.count(0)
        print(count_one * (1 << count_zero))

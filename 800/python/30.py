import sys


input = sys.stdin.readline

t = int(input())
for _ in range(t):
        n = input().strip()
        numLL = int(n)
        cnt = 9 * (len(n) - 1)
        div = 10 ** (len(n) - 1)
        mul = numLL // div
        cnt += mul
        print(cnt)


import sys


input = sys.stdin.readline

t = int(input())
for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))
        xor_sum = 0
        for x in arr:
            xor_sum ^= x

        if n % 2 == 1:
            print(xor_sum)
        else:
            if xor_sum == 0:
                print(0)
            else:
                print(-1)


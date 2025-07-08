import sys


input = sys.stdin.readline

t = int(input())
for _ in range(t):
        n = int(input())
        nums = list(map(int, input().split()))
        arr = []
        for i, x in enumerate(nums):
            if i and arr[-1] > x:
                arr.append(1)
            arr.append(x)
        print(len(arr))
        print(' '.join(map(str, arr)))

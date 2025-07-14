import sys

input = sys.stdin.readline

t = int(input())
for _ in range(t):
        n, k = map(int, input().split())
        arr = list(map(int, input().split()))
        arr.sort()
        cntNum = [abs(arr[i] - arr[i+1]) for i in range(n-1)]

        maximum = 0
        curr = 0
        for diff in cntNum:
            if diff <= k:
                curr += 1
            else:
                curr = 0
            maximum = max(maximum, curr)
        print(n - (maximum + 1))

import sys

def process_array(arr):
    n = len(arr)
    arr = [x + 1 if x == 1 else x for x in arr]
    for i in range(1, n):
        if arr[i] % arr[i - 1] == 0:
            arr[i] += 1
    return arr


input = sys.stdin.readline
t = int(input())
for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))
        result = process_array(arr)
        print(' '.join(map(str, result)))

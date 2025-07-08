t = int(input())

for _ in range(t):
    n, x = map(int, input().split())
    arr = list(map(int, input().split()))
    max_gap = 0
    max_gap = max(max_gap, arr[0])
    for i in range(1, n):
        max_gap = max(max_gap, arr[i] - arr[i-1])
    max_gap = max(max_gap, 2 * (x - arr[-1]))
    
    print(max_gap)
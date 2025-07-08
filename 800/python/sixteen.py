t = int(input())

for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    
    if arr != sorted(arr):
        print(0)
    else:
        diff = []
        for i in range(1, n):
            diff.append(arr[i] - arr[i-1])
        
        minimum = min(diff)
        print(minimum // 2 + 1)

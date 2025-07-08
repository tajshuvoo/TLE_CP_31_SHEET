t = int(input())

for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    
    c = arr.count(-1) 
    ans = 0
    
    while c > n // 2 or c % 2:
        c -= 1
        ans += 1
    
    print(ans)

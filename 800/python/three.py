t = int(input())

for _ in range(t):
    n = int(input())
    arr = list(input().split())
    
    # Convert list to string
    s = ''.join(arr)
    sub = "..."
    
    if sub in s:
        print(2)
    else:
        count_dots = s.count('.')
        print(count_dots)

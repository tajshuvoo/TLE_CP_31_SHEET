t = int(input())

for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    
    unique = set(arr)
    
    if len(unique) == 1:
        print("Yes")
    elif len(unique) == 2:
        freq = [arr.count(x) for x in unique]
        if abs(freq[0] - freq[1]) <= 1:
            print("Yes")
        else:
            print("No")
    else:
        print("No")
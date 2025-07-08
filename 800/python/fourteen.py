t = int(input())

for _ in range(t):
    arr = list(map(int, input().split()))
    
    if arr[2] % 2 == 0:
        if arr[1] >= arr[0]:
            print("Second")
        else:
            print("First")
    else:
        if arr[1] <= arr[0]:
            print("First")
        else:
            print("Second")

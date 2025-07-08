t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    max_l = 0
    curr_l = 0
    target = 0
    for a in arr:
        if a == target:
            curr_l += 1
            max_l = max(max_l, curr_l)
        else:
            curr_l = 0
    print(max_l)
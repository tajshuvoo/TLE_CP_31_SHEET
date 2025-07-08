t = int(input())
for _ in range(t):
    n = int(input())
    num_str = input().strip()
    arr = [int(c) for c in num_str]
    i, j = 0, n - 1
    curr_n = n
    while i < j:
        if (arr[i] == 0 and arr[j] == 1) or (arr[i] == 1 and arr[j] == 0):
            curr_n -= 2
            i += 1
            j -= 1
        else:
            break
    print(curr_n)
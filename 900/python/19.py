t = int(input())
for _ in range(t):
    x, n = map(int, input().split())
    if x % 2 == 0:
        if n % 4 == 0:
            sum_ = 0
        elif n % 4 == 1:
            sum_ = -n
        elif n % 4 == 2:
            sum_ = 1
        else:  # n % 4 == 3
            sum_ = n + 1
    else:
        if n % 4 == 0:
            sum_ = 0
        elif n % 4 == 1:
            sum_ = n
        elif n % 4 == 2:
            sum_ = -1
        else:  # n % 4 == 3
            sum_ = -n - 1
    print(x + sum_)
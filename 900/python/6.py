t = int(input())
for _ in range(t):
    n = int(input())
    x = 1
    for i in range(1, n + 1):
        if n % i != 0:
            break
        else:
            x = i
    print(x)
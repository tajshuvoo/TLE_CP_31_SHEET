
t = int(input())
for _ in range(t):
        n = int(input())
        if n % 2 == 1 or n < 4:
            print(-1)
        else:
            print((n + 4) // 6, n // 4)
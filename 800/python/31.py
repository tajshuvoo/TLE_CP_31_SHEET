t = int(input())
for _ in range(t):
    n, a, b = map(int, input().split())
    if (a + b + 2 <= n) or ((a == b) and (b == n)):
        print("Yes")
    else:
        print("No")
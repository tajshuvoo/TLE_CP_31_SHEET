t = int(input())
for _ in range(t):
    n, k, x = map(int, input().split())
    min_sum = k * (k + 1) // 2
    max_sum = (n * (n + 1) - (n - k) * (n - k + 1)) // 2
    if min_sum <= x <= max_sum:
        print("YES")
    else:
        print("NO")
def is_not_power_of_two(n):
    return (n & (n - 1)) != 0

t = int(input())
for _ in range(t):
    n = int(input())
    print("YES" if is_not_power_of_two(n) else "NO")
t = int(input())
for _ in range(t):
    a, b, c = map(int, input().split())
    found = False
    new_a = b - (c - b)
    if not found and new_a >= a and new_a % a == 0 and new_a != 0:
        found = True
    if not found and (c - a) % 2 == 0:
        new_b = a + (c - a) // 2
        if new_b >= b and new_b % b == 0 and new_b != 0:
            found = True
    new_c = a + 2 * (b - a)
    if not found and new_c >= c and new_c % c == 0 and new_c != 0:
        found = True
    print("YES" if found else "NO")

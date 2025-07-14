t = int(input())
for _ in range(t):
    n = int(input())
    s = input().strip()
    ans = 1
    curr = 1
    for i in range(1, n):
        if s[i] != s[i-1]:
            curr = 1
        else:
            curr += 1
        ans = max(ans, curr)
    print(ans + 1)
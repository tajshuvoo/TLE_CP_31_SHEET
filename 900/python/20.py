t = int(input())
for _ in range(t):
    s = list(input())
    s[-1] = s[0]
    print(''.join(s))
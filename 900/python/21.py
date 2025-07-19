import sys

t = int(sys.stdin.readline())
for _ in range(t):
        s = sys.stdin.readline().strip()
        digits_int = [int(c) for c in s if c.isdigit()]
        minimum = float('inf')
        n = len(s)
        for i in range(n-1, -1, -1):
            for j in range(i-1, -1, -1):
                if s[j].isdigit() and s[i].isdigit():
                    num = int(s[j]) * 10 + int(s[i])
                    if num % 25 == 0:
                        moves = (n - i - 1) + (i - j - 1)
                        minimum = min(minimum, moves)
                        break
        print(-1 if minimum == float('inf') else minimum)

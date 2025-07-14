import sys


input = sys.stdin.readline

t = int(input())
for _ in range(t):
        n, q = map(int, input().split())
        arr = list(map(int, input().split()))

        pref = [0] * (n + 1)
        for i in range(n):
            pref[i + 1] = pref[i] + arr[i]

        for _ in range(q):
            l, r, k = map(int, input().split())
            partial_sum = pref[r] - pref[l - 1]
            ans = pref[n] - partial_sum + (k * (r - l + 1))
            print("YES" if ans % 2 == 1 else "NO")


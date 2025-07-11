import sys

input = sys.stdin.readline
t = int(input())
for _ in range(t):
    n_k = input().split()
    while len(n_k) < 2:
        n_k += input().split()
    n, k = map(int, n_k)
    s = input().strip()
    while len(s) < n:
        s += input().strip()
    count_letters = [0] * 26
    for ch in s:
        if 'a' <= ch <= 'z':
            count_letters[ord(ch) - ord('a')] += 1
    cnt_odd = sum(1 for x in count_letters if x % 2 == 1)
    if cnt_odd > k + 1:
        print("NO")
    else:
        print("YES")

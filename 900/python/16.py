
t = int(input())
for _ in range(t):
        s = input().strip()
        t_str = input().strip()

        n = len(s)
        m = len(t_str)

        freq_t = [0] * 26
        for ch in t_str:
            freq_t[ord(ch) - ord('A')] += 1

        s_list = list(s)
        for i in range(n - 1, -1, -1):
            idx = ord(s_list[i]) - ord('A')
            if freq_t[idx] > 0:
                freq_t[idx] -= 1
            else:
                s_list[i] = '.'

        ans = ''.join([ch for ch in s_list if ch != '.'])

        if ans == t_str:
            print("YES")
        else:
            print("NO")


t = int(input())
for _ in range(t):
    n, k, x = map(int, input().split())

    if x != 1:
        print("YES")
        print(n)
        print(' '.join(['1'] * n))
    else:
        if k == 1:
            print("NO")
        elif k == 2:
            if n % 2 == 1:
                print("NO")
            else:
                print("YES")
                print(n // 2)
                print(' '.join(['2'] * (n // 2)))
        else:
            if n % 2 == 1:
                print("YES")
                cnt = (n - 3) // 2 + 1
                print(cnt)
                print(' '.join(['2'] * ((n - 3) // 2) + ['3']))
            else:
                print("YES")
                print(n // 2)
                print(' '.join(['2'] * (n // 2)))

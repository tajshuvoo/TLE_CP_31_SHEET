
t = int(input())
for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        found = False
        for j in range(1, n-1):
            i = -1
            for x in range(j):
                if a[x] < a[j]:
                    i = x
                    break
            k = -1
            for x in range(j+1, n):
                if a[j] > a[x]:
                    k = x
                    break
            if i != -1 and k != -1:
                print("YES")
                print(i+1, j+1, k+1)
                found = True
                break
        if not found:
            print("NO")

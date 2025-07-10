
t = int(input())
for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))
        arr.sort(reverse=True)
        count_same = arr.count(arr[0])

        if n > 1 and arr[0] == arr[1]:
            arr[0], arr[-1] = arr[-1], arr[0]

        if count_same == n:
            print("NO")
        else:
            print("YES")
            print(' '.join(map(str, arr)))

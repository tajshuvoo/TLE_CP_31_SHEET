test_cases = []
t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    test_cases.append(arr)

for arr in test_cases:
    arr.sort()
    if arr[-1] == arr[0]:
        print(-1)
    else:
        arrb = []
        arrc = []
        n = len(arr)
        for i in range(n):
            if arr[i] == arr[-1]:
                arrc.append(arr[-1])
            else:
                arrb.append(arr[i])
        print(len(arrb), len(arrc))
        print(*arrb)
        print(*arrc)
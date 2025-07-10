import sys


input = sys.stdin.readline

t = int(input())
for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))
        count_two = arr.count(2)
        count_one = arr.count(1)
        cnt = 0
        flag = True
        if count_one == n:
            print(1)
            flag = False
        elif count_two:
            for i in range(n):
                if arr[i] == 2:
                    cnt += 1
                    if cnt == (count_two - cnt):
                        print(i + 1)
                        flag = False
                        break
        if flag:
            print(-1)


import sys
import math

input = sys.stdin.readline

t = int(input())
for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))
        flag = False
        for i in range(n):
            for j in range(i+1, n):
                if math.gcd(arr[i], arr[j]) <= 2:
                    flag = True
                    break
            if flag:
                break
        print("Yes" if flag else "No")

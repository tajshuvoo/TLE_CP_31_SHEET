import math


t = int(input())
for _ in range(t):
        n, x = map(int, input().split())
        a = list(map(int, input().split()))
        maximum = 0
        total_sum = 0
        for y in a:
            maximum += math.ceil(y / x)
            total_sum += y
        print(f"{math.ceil(total_sum / x)} {maximum}")

import sys


input = sys.stdin.readline

t = int(input())
for _ in range(t):
        a, b = map(int, input().split())
        xk, yk = map(int, input().split())
        xq, yq = map(int, input().split())

        moves = [
            (a, b), (a, -b), (-a, b), (-a, -b),
            (b, a), (b, -a), (-b, a), (-b, -a)
        ]

        king = set((xk + dx, yk + dy) for dx, dy in moves)
        queen = set((xq + dx, yq + dy) for dx, dy in moves)

        common = king & queen
        print(len(common))

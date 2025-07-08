import sys

n = int(sys.stdin.readline())
chaneka = list(map(int, sys.stdin.readline().split()))

chaneka = [abs(x) for x in chaneka]
min_val = min(chaneka)

print(min_val)
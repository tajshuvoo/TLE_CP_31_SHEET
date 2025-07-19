from collections import Counter
import sys
input = sys.stdin.readline

t = int(input())
for _ in range(t):
    n = int(input())
    a = input().split()
    
    max_freq = max(Counter(a).values())
    
    operations = n - max_freq
    current_count = max_freq
    
    while current_count < n:
        operations += 1  
        current_count *= 2
    
    print(operations)

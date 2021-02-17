import math
n = int(input())
arr = [int(x) for x in input().split(' ')]
avg = sorted(arr)[len(arr)//2]
print(sum(map(lambda x:abs(x - avg), arr)))

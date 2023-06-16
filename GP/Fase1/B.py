from math import ceil

n, k, l = input().split()
n = int(n)
k = int(k)
l = int(l)

ct = n * k
ct = ct/l

print(ceil(ct))
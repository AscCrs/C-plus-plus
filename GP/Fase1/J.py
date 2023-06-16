import math

n, q = map(int, input().split())
a = list(map(int, input().split()))

cum_sum = [0] * (n+1)
for i in range(1, n+1):
    cum_sum[i] = cum_sum[i-1] + a[i-1]

for i in range(q):
    l, r = map(int, input().split())
    sum_range = cum_sum[r] - cum_sum[l-1]
    num_subs = r - l + 1
    result = sum_range**2 - sum(a[j]**2 for j in range(l-1, r))
    print(math.floor(result/2))

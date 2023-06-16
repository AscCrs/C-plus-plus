MOD = 10**9 + 7

def count_ways(words, tattoo):
    n = len(tattoo)
    dp = [0] * (n + 1)
    dp[0] = 1
    for i in range(1, n+1):
        for j in range(i):
            if dp[j] and (tattoo[j:i] in words):
                dp[i] += dp[j]
                dp[i] %= MOD
    return dp[n]

n = int(input())
words = set()
for i in range(n):
    words.add(input().strip())
tattoo = input().strip()
print(count_ways(words, tattoo))

S = input()
K = int(input())

for i in range(len(S)):
    j = i
    while j >= K and S[j - K] > S[j]:
        S = S[:j - K] + S[j] + S[j - K + 1:j] + S[j - K] + S[j + 1:]
        j -= K

print(S)
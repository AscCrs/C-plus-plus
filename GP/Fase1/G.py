

n = int(input())

if n == 1:
    print("Jane")
else:
    winner = [None]*(n+1)

    winner[1] = 'Jane'

    winner[2] = 'John'

    for i in range(3, n+1):
        if all(winner[i-j] == 'John' for j in range(1, i)):
            winner[i] = 'Jane'
        else:
            winner[i] = 'John'

    print(winner[n])
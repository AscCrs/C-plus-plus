entrada = int(input())
name = {}

for i in range(entrada):
    entrada = input().split()[1:]
    ini = ''.join([word[0] for word in entrada])
    name[ini] = name.get(ini, 0) + 1

print(sum([1 for count in name.values() if count == 1]))

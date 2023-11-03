n = int(input())

for x in range(n):
    string = input()
    sub_str = input()
    temps_strings = []
    temps_strings.append(string)
    to_find_set = set(list(sub_str))
    output = [x for x in temps_strings if len(to_find_set.intersection(set(list(x)))) == len(to_find_set)]
    if len(output) > 0:
        print("WIN")
    else:
        print("LOSE") 
         
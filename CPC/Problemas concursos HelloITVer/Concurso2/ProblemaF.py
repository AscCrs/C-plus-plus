n = int(input())
stack = []
temp = 0
temp_stack = []

for x in range(n):
	entrada = input()
	entrada = entrada.split()
	if entrada[0] =='1':
		stack.append(entrada[1])
	elif entrada[0] == '2':
		stack.pop()
	elif entrada[0] == '3':
		for elemento in stack:
			temp_stack.append(elemento)
		for y in range(len(temp_stack)):
			popped = int(temp_stack.pop())
			if popped > temp:
				temp =  popped
		print(temp)
		temp = 0
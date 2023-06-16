x = int(input())
name = []

for i in range(x):
    entrada = input()
    entrada = entrada.split()
    # print(entrada)
    size = int(entrada[0])+1
    lista = []
    lista_iniciales = []
    for x in range(1, size):
        lista.append(entrada[x])
    for elemento in lista:
        elemento = [*elemento]
        lista_iniciales.append(elemento[0])
        
    palabra = "".join(lista_iniciales)
    name.append(palabra)

counter = 0
for dato in name:
    temp = name.count(dato)
    if temp == 1:
        counter += 1

print(counter)

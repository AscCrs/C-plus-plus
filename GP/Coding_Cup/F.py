x1, y1, x2, y2 = map(float, input().split())
m = (y2-y1)/(x2-x1)
n = int(input())
amiga_encontrada = 0
for i in range(n):
    x, y = map(float, input().split())
    mx = (y-y2)/(x-x2)

    if((mx == m and (x1 <= x <= x2 and y1 <= y <= y2)) or (mx == m and (x1 >= x >= x2 and y1 >= y >= y2))):
        amiga_encontrada+=1
print(amiga_encontrada)
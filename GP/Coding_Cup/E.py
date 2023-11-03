# Función para obtener la calificación que más se repite
def obtener_calificacion_mas_repetida(calificaciones):
    calificaciones_contadas = {}
    for calificacion in calificaciones:
        if calificacion in calificaciones_contadas:
            calificaciones_contadas[calificacion] += 1
        else:
            calificaciones_contadas[calificacion] = 1
    max_repeticiones = max(calificaciones_contadas.values())
    calificaciones_mas_repetidas = [calificacion for calificacion, repeticiones in calificaciones_contadas.items() if repeticiones == max_repeticiones]
    return max(calificaciones_mas_repetidas)

# Lectura de datos
n = int(input())
calificaciones_totales = []

for _ in range(n):
    c = int(input())
    calificaciones = list(map(int, input().split()))
    calificaciones_totales.extend(calificaciones)

# Cálculo de estadísticas
suma_calificaciones = 0
cantidad_aprobadas = 0
cantidad_reprobadas = 0
calificacion_mas_repetida = obtener_calificacion_mas_repetida(calificaciones_totales)

for calificacion in calificaciones_totales:
    if calificacion >= 70:
        suma_calificaciones += calificacion
        cantidad_aprobadas += 1
    else:
        cantidad_reprobadas += 1

promedio_general = round(suma_calificaciones / len(calificaciones_totales), 2)

# Impresión de resultados
print(promedio_general)
print(calificacion_mas_repetida)

for _ in range(n):
    c = int(input())
    calificaciones = list(map(int, input().split()))
    suma_calificaciones_campus = 0
    cantidad_aprobadas_campus = 0
    cantidad_reprobadas_campus = 0
    calificacion_mas_repetida_campus = obtener_calificacion_mas_repetida(calificaciones)

    for calificacion in calificaciones:
        if calificacion >= 70:
            suma_calificaciones_campus += calificacion
            cantidad_aprobadas_campus += 1
        else:
            cantidad_reprobadas_campus += 1

    promedio_campus = round(suma_calificaciones_campus / c, 2)
    print(f"{promedio_campus} {calificacion_mas
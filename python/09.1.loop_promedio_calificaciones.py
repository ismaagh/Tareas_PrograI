calificaciones = [10, 10, 9, 8, 9.5, 7]
n = len(calificaciones)
suma = 0
for i in range(0, n):
    suma += calificaciones[i]
promedio = suma / n
print(promedio)

calificaciones = [10, 10, 9, 8, 9.5, 7]
n = len(calificaciones)
suma = 0
i = 0
while(i < n):
    suma += calificaciones[i]
    i += 1
promedio = suma / n
print(promedio)

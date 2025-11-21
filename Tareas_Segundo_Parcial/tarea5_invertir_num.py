n = input("Ingrese el numero a invertir: ")
longitud = len(n)
invertido = ""

for i in range(longitud - 1, -1, -1):
    invertido += n[i]

print("Resultado:", int(invertido))

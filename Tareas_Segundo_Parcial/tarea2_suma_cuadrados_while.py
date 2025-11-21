n = int(input("Ingresa el valor de n: "))

resultado = 0
i = 0

while i <= n:
	n_cuadrado = i * i
	resultado += n_cuadrado
	i += 1

print(f"Resultado: {resultado}")

n = int(input("Ingrese el valor de n: "))
resultado = 0;
for i in range(0, n + 1):
	n_cuadrado = i * i
	resultado += n_cuadrado

print(f"Resultado: {resultado}")

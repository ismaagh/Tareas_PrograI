lado1 = float(input("Ingresa el lado α:"))
lado2 = float(input("Ingresa el lado β:"))
lado3 = float(input("Ingresa el lado θ:"))

if lado1 == lado2 and lado2 == lado3:
    print("Triángulo equilatero")
if lado1 != lado2 and lado2 != lado3 and lado1 != lado3:
    print("Triángulo escaleno")
if (
    ((lado1 == lado2) and (lado1 != lado3)) or
    ((lado2 == lado3) and (lado2 != lado1)) or
    ((lado1 == lado3) and (lado1 != lado2))
):
    print("Triángulo isóceles")

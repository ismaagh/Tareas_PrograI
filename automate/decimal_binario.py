numero = int(input())
cociente = numero
binario_str = ""

while cociente // 2 != 0:
    residuo = cociente % 2
    cociente //= 2
    binario_str += str(residuo)

binario_str += str(cociente % 2)
print(binario_str) 

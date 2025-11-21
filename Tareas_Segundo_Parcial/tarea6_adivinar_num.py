import random

aleatorio = random.randint(1, 100) 
usuario = int(input("Ingresa un número [1,100]: "))

while aleatorio != usuario:
    if usuario < aleatorio:
        print("El numero a adivinar es mayor")
    if usuario > aleatorio: 
        print("El numero a adivinar es menor")    
    usuario = int(input("Ingresa un nuevo número: "))

print("Adivinaste el numero")

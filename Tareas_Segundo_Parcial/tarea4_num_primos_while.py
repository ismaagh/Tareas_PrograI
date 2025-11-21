n = int(input("Limite n (debe ser mayor o igual a 2): "))

if n < 2:
    print("Error: El limite debe ser mayor o igual a 2.")
    exit()

print("Resultado:", end=" ")  
primero = True # flag
i = 2

while i <= n:
    divisores = 0 
    j = 2 

    while j * j <= i:
        if i % j == 0:
            divisores = 1
            break # No es primo
        j += 1
    
    # Si divisores = 0, es primo.
    if divisores == 0:
        if not primero:
            print(",", end=" ") 
        print(i, end="") 
        primero = False

    i += 1 

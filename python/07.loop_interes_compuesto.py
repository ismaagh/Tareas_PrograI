saldo = float(input("Ingresa tu saldo inicial: $"))
interes_diario = float(input("Cuál es el % de interés?:")) / 100
numero_dias = int(input("Cuántos días?:"))

for dia in range(0, numero_dias + 1): 
    print(f"#{dia},    ${saldo:.2f},   ${saldo*interes_diario:.2f}")
    saldo = saldo * (1 + interes_diario)


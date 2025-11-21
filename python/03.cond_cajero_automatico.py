SALDO_CLIENTE = 1000
SALDO_ACTUALIZADO_CLIENTE = SALDO_CLIENTE
print('Bienvenid@! Tu SALDO es:$', SALDO_CLIENTE)
monto_retirar = float(input('Ingresa el monto que deseas retirar:$'))
if monto_retirar <= SALDO_CLIENTE and monto_retirar > 0:
    SALDO_ACTUALIZADO_CLIENTE -= monto_retirar
    print('Se han retirado:$', monto_retirar, ' Tu nuevo saldo es:$', SALDO_ACTUALIZADO_CLIENTE)
if monto_retirar > SALDO_CLIENTE:
    print('No cuentas con el suficiente saldo')
    
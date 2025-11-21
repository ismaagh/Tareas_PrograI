La intención de los programas `binario_decimal.py` y `invertir_cadena.cpp` es mostrar como se pueden "comunicar" lenguajes de programación entre si para crear flujos más complejos, este ejercicio da al estudiante  una intuición a las APIs (Application Programming Interface) de forma sencilla haciendo uso de Python, C++ y Linux  

Pasos:
```bash
g++ invertir_cadena.cpp # Esto compilará nuestro programa a lenguaje máquina 
echo "321" | python binario_decimal.py | ./a.out # El operador | (pipe / tuberia) es un operador que nos permite redirigir el flujo de salida de un programa y pasarlo como entrada a otro
``` 


from cs50 import *
from math import *

cam = get_float("Change owed: ")
moneda = 0

#Ciclo para el correcto ingreso del cambio
while cam <= 0:
    cam = get_float("Change owed: ")

#Se redondea para poder hacer el conteo
cambio = int(cam * 100)

#Mientras el cambio sea mayor a 25 se le restara esta cantidad y las monedas aumentara
while cambio >= 25:
    cambio -= 25
    moneda += 1

#Mientras el cambio sea mayor a 10 se le restara esta cantidad y las monedas aumentara
while cambio >= 10:
    cambio -= 10
    moneda += 1

#Mientras el cambio sea mayor a 5 se le restara esta cantidad y las monedas aumentara
while cambio >= 5:
    cambio -= 5
    moneda += 1

#Mientras el cambio sea mayor a 1 se le restara esta cantidad y las monedas aumentara
while cambio >= 1:
    cambio -= 1
    moneda += 1

#imprimo las monedas a devolver
print(moneda)


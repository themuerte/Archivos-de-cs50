from cs50 import *

#se toma el tamaño de la piramide
tamaño = get_int("Height: ")

#verifica si es positivo y si es menor a 23
while tamaño < 0 or tamaño > 23:
    tamaño = get_int("Height: ")

#le agrega 1 al tamaño
tamaño += 1

#inicializamos las variables de dibujo
numeral = 2
espacios = tamaño - 2

#Imprime la piramide
#Se le resta 1 al tamaño por el alto de la piramide
for i in range(tamaño - 1):

    #imprimo los espacios
    for j in range(espacios):
        print(' ', end = "")

    #imprimo los #
    for j in range(numeral):
        print('#', end = "")

    #Se va aumentando los # y disminuyendo los espacios para la forma de la piramide
    espacios -= 1
    numeral += 1
    print("")





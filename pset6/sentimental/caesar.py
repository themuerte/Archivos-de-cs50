from cs50 import *
import sys

#argumento
print("", sys.argv[0])

#se captura el argumento
k = int(sys.argv[1])

#entrada del texto a cifrar
textoP = get_string("plaintext: ")

#tamaño del texto
n = len(textoP)

#texto cifrado
print("ciphertext: ", end = "")

for i in range(n):

    #si textoP[i] es mayuscula
    if textoP.isupper():
        cla = (65 + (ord(textoP[i]) + k - 65) % 26)
        #imprime la letra sin salto de linea
        print(chr(cla), end = "")

    #si textoP[i] es minuscula
    elif textoP.islower():
        cla = (97 + (ord(textoP[i]) + k - 97) % 26)
        print(chr(cla), end = "")

    #si el textoP[i] es distinto de un alfabeto que imprima solo
    if (textoP.isalpha()) == False:
        print({textoP[i]}, end = "")

#salto de linea
print("")




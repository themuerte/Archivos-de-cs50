# Questions

## What's `stdint.h`?

es una libreria nos ayuda a trabajar con distintos rangos de numeros a travez de declarar enteros de diferentes tamaño declarados en bits

## What's the point of using `uint8_t`, `uint32_t`, `int32_t`, and `uint16_t` in a program?

de tener numeros cun un largo definido y que son positivos

## How many bytes is a `BYTE`, a `DWORD`, a `LONG`, and a `WORD`, respectively?

BYTE = 1 byte, DWORD = 4 bytes, LONG = 4 bytes, WORD = 2 bytes

## What (in ASCII, decimal, or hexadecimal) must the first two bytes of any BMP file be? Leading bytes used to identify file formats (with high probability) are generally called "magic numbers."

bf.bfType = 0x4d42 y bi.biSize = 40

## What's the difference between `bfSize` and `biSize`?

bfSize es el tamaño del archivo y biSize es el tamaño del formato

## What does it mean if `biHeight` is negative?

que la imagen no tiene altura por lo tanto solo se veria una linea por el ancho de la imagen

## What field in `BITMAPINFOHEADER` specifies the BMP's color depth (i.e., bits per pixel)?

biClrUsed

## Why might `fopen` return `NULL` in lines 24 and 32 of `copy.c`?

por que se refiere si el archivo existe o no

## Why is the third argument to `fread` always `1` in our code?

por que es la cantidad de veces que va a leer esa parte

## What value does line 63 of `copy.c` assign to `padding` if `bi.biWidth` is `3`?

la imagen o el .bmp tiene que ser multiplo de cuatro y si no es multiplo de 4 sele tiene que calcular un relleno
y colocarlo

## What does `fseek` do?

establece la posicion de una secuencia en un archivo

## What is `SEEK_CUR`?

mueve la poscion del puntero del archivo a una ubicacion determinada

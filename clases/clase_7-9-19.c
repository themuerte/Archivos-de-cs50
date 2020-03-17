#include<stdio.h>
#include<cs50.h>

typedef struct
{
    string nombre[10];
    string apellido[10];
    int edad;
    string carrera[20];

}
Alumno;

int main(void)
{
    Alumno *alum =malloc(2 * sizeof(Alumno));

    for(int i; i < 2; i++)
    {
        alum[i].nombre = get_string("Nombre: ");
        alum[i].apellido = get_string("Apellido: ");
        alum[i].edad = get_int("edad: ");
        alum[i].carrera = get_string("Carrera: ");
    }

    for(int i; i < 2; i++)
    {
        printf("\n Alumno: %d",i + 1);
        printf("Nombre: %s \nApellido: %s \nEdad: %d \nCarrera: %s" ,alum[i].nombre, alum[i].apellido, alum[i].edad, alum[i].carrera);
        printf("\n===============================================");
    }


    return 0;
}

















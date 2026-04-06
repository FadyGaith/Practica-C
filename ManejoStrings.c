#include <stdio.h>
#include <string.h>

int main (void)
{
    char palabra[20] = "HOLA ";
    int largo = strlen(palabra);

    printf("El largo de la palabra %s es: %d \n", palabra, largo);

    char copia[10];

    strcpy(copia, palabra);

    printf("La palabra copiada es: %s con una longitud de: %d \n",copia, strlen(copia));

    char nombre[] = "Fady";

    strcat(palabra, nombre);

    printf("Las palabras unidas son %s \n", palabra);

    char contrasena[] = "123LoLa";
    char IngresoContrasena[15];

    printf("Ingrese una contrasena: \n");

    fgets(IngresoContrasena, 15, stdin);
    int largoCsn = strlen(IngresoContrasena);

    if(largoCsn == 14)
        IngresoContrasena[14] = '\0';
    else
        IngresoContrasena[largoCsn-1] = '\0';

    if(!strcmp(IngresoContrasena,contrasena))
        printf("Contrasena correcta \n");
    else
        printf("Contrasena incorrecta \n");
    
    return 0;
}
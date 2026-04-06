
#include <stdio.h>
#include <stdlib.h>

void LlenarTabla (int tabla[], int numero)
{
    for(int i = 0; i<numero; i++)
    {
        tabla[i] = (i+1)*5;
    }
}


int main() {
int numero;

printf("Ingrese hasta que numero quiere ver la tabla del 5: ");
fflush(stdout); // <--- AGREGAR ESTA LÍNEA
scanf("%d", &numero);

int *tabla = malloc(numero * sizeof(int));
if (tabla == 0) {
    printf("no se pudo asignar la memoria");
    return 1; // <--- Esto corta el programa si no hay memoria
}
LlenarTabla(tabla, numero);

printf("La tabla es: \n");
for(int i = 0; i< numero; i++)
{
    printf("%d * 5 es: %d \n", i+1, tabla[i]);
}

free(tabla);

    return 0;
}


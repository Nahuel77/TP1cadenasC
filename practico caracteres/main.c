#include <stdio.h>
#include <stdlib.h>
#include "carga.h"
#include "muestra.h"

void carga(char lista[][100]);
void muestra(char lista[][100]);

int main()
{
    char usuarios[0][100];
    int op;

    do
    {
        printf("Selecciones una opcion: \n");
        printf("\t1. Cargar usuarios.\n");
        printf("\t2. Mostrar lista de usuarios.\n");
        printf("\t3. Salir.\n");

        scanf("%d", &op);
        system("cls");
        switch(op)
        {
        case 1:
            carga(usuarios);
            system("cls");
            break;
        case 2:
            muestra(usuarios);
            system("cls");
            break;
        case 3:
            printf("\t\tHasta luego!\n\n");
            break;
        default:
            printf("La opcion ingresada es incorrecta. Seleccione una de las opciones del menu.");
        }
    }
    while(op!=3);
    return 0;
}

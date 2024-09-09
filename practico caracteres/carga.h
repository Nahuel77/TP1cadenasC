#include <string.h>
#include <ctype.h>

void carga(char lista[][100])
{
    int i=0, status=1;
    char nombre[100];

    do
    {
        printf("Ingrese nombre y apellido del usuario: ");
        fflush(stdin);
        gets(nombre);

        i=0;
        while(strcmp(lista[i],"")!=0)
        {//aqui comparo el nombre ingresado con cada fila de la matriz, en tanto exista una fila.
            if(strcmp(nombre, lista[i])==0)
            {
                printf("El nombre ingresado ya existe en la lista:\n");
                status=0; //si el nombre existe status cambia a cero.
            }
            i++;
        }

        if(status!=0){
            strcpy(lista[i], nombre);
            status=1;
        }

        for (i=0; i<=strlen(nombre); i++)
        {
            nombre[i] = tolower(nombre[i]);
        }
    }
    while(strcmp(nombre, "salir")!=0);
}

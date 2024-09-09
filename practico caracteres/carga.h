#include <string.h>

#define N 5

void carga(char lista[][100])
{
    int i, j, status=1;
    char nombre[100];
    for(i=0; i<N; i++)
    {
        printf("Ingrese nombre y apellido del usuario n. %d: ",i+1);
        fflush(stdin);
        gets(nombre);
        for(j=0; j<N; j++){
            if(strcmp(nombre, lista[i])==0)
            {
                printf("El nombre ingresado ya existe en la lista:\n");
                j=5;
                i--;
                status=0;
            }
        }
        if(status!=0){
            strcpy(lista[i], nombre);
        }
    }
}

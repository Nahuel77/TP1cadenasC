#define N 5

void muestra(char usuarios[][100]){
    printf("Usuarios:\n");
    int i;
    for(i=0; i<N; i++){
        puts(usuarios[i]);
    }
    system("pause");
}

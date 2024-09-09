void muestra(char usuarios[][100])
{
    printf("Usuarios:\n");
    int i=0;
    i=0;
    while(strcmp(usuarios[i],"")!=0)
    {
        puts(usuarios[i]);
        i++;
    }
    system("pause");
}

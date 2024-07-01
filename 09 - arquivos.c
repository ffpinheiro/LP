#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arq;
    arq = fopen("texto.txt","w");
    if(arq == NULL){
        puts("Ocorreu um erro.");
    }else{
        puts("arquivo aberto");
        //fwrite("texto",sizeof(char),6,&arq);
        //fread();
    }
    fclose(arq);
    return 0;
}

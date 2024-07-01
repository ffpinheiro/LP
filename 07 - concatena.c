#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * concatena(char *s1, char *s2);

int main()
{
    char string1[20],string2[20];
    puts("primeira string: ");
    scanf("%s",string1);
    puts("segunda string: ");
    scanf("%s",string2);
    char *concatenado = concatena(string1,string2);
    printf("concatenado: %s\n",concatenado);
    return 0;
}

char * concatena(char *s1, char *s2){
    int tamanho1 = strlen(s1);
    int tamanho2 = strlen(s2);
    int tamanhoTotal = tamanho1+tamanho2;
    int i=0;
    char *concatenado = malloc(tamanhoTotal*sizeof(char));
    for(i=0;i<tamanho1;i++){
        concatenado[i] = s1[i];
    }
    for(i=0;i<tamanho2;i++){
        concatenado[i+tamanho1] = s2[i];
    }
    concatenado[tamanhoTotal] = '\0';
    return concatenado;
}

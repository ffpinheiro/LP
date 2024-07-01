#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct registro{
    int vetor[3];
    int valor;
}registro;

registro leRegistro(registro a){
    for(int i=0;i<3;i++){
        printf("Digite um número inteiro para o elemento %d do vetor: ",i);
        scanf("%d",&a.vetor[i]);
    }
    return a;
}

registro somaRegistro(registro a){
    int x=0;
    for(int i=0;i<3;i++){
        x += a.vetor[i];
    }
    a.valor = x;
    return a;
}

void imprimeRegistro(registro a, char nome[10]){
    puts(nome);
    for(int i=0;i<3;i++){
        printf("[%d] %d\n",i,a.vetor[i]);
    }
    printf("valor: %d",a.valor);
}

int main()
{
    setlocale(LC_ALL,"portuguese");
    registro a;
    a = leRegistro(a);
    a = somaRegistro(a);
    imprimeRegistro(a,"a");
    return 0;
}

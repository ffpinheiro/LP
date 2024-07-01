#include <stdio.h>
#include <string.h>
#define TAM 4
typedef struct Aluno{
    char nome[100];
    int RA;
} Aluno;

void imprimeArquivo(char nomeArq[]);
void alteraNome(char nomeArq[],int ra, char* nome);

int main()
{
    char nomeArq[] = "alunos.bin";
    Aluno alunos[] = { {"Batata", 1}, {"Isa", 2}, {"Malu", 3}, {"Beto", 4} };

    FILE *arq = fopen(nomeArq, "w+b");
    if(arq == NULL){
        printf("Erro ao criar arquivo\n");
        return 1;
    }
    fwrite(alunos, sizeof(Aluno), 4, arq);
    fclose(arq);

    imprimeArquivo(nomeArq);
    alteraNome(nomeArq, 2, "Isabela");
    imprimeArquivo(nomeArq);
    return 0;
}

void imprimeArquivo(char nomeArq[]){
    FILE *arq=NULL;
    int i;
    Aluno cad[TAM];
    arq = fopen(nomeArq, "r+b");
    if(arq == NULL){
        printf("Erro ao ler arquivo\n");
    }
    fread(cad, sizeof(Aluno), TAM, arq);
    printf("---- Alunos ----\n");
    for(i=0;i<TAM;i++){
        printf("Nome: %s, RA: %d\n",cad[i].nome,cad[i].RA);
    }
    fclose(arq);
}
void alteraNome(char nomeArq[],int ra, char *nome){
    FILE *arq=NULL;
    int i=0;
    Aluno cad[TAM];
    arq = fopen(nomeArq, "r+b");
    if(arq == NULL){
        printf("Erro ao abrir arquivo\n");
    }
    fread(cad, sizeof(Aluno), TAM, arq);
    for(i=0;i<TAM;i++){
        if(cad[i].RA == ra){
            fseek(arq,i*sizeof(Aluno),SEEK_SET);
            int tamanho = strlen(nome);
            fwrite(nome,tamanho,1,arq);
            printf("\nNome do aluno %d alterado\n\n",ra);
        }
    }
    fclose(arq);
}

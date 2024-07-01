#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Aluno{
    int RA;
    int idade;
};

struct Aluno leAluno(){
    struct Aluno alunoAux;
    puts("Digite o RA: ");
    scanf("%i",&alunoAux.RA);
    puts("Digite o idade: ");
    scanf("%i",&alunoAux.idade);
    return alunoAux;
};

void imprimeAluno(struct Aluno aluno){
    printf("RA: %d  idade: %d\n",aluno.RA,aluno.idade);
};

float calcularMediaIdades(struct Aluno turma[],int n){
    float mediaIdades=0;
    for(int i=0;i<n;i++){
        mediaIdades += turma[i].idade;
    }
    mediaIdades = (mediaIdades/n);
    return mediaIdades;
}

int main()
{
    setlocale(LC_ALL,"portuguese");
    int n=5;
    printf("Digite o número de alunos: ");
    scanf("%d",&n);
    float mediaIdades=0;
    struct Aluno turma[n];
    for(int i=0;i<n;i++){
        turma[i] = leAluno();
    }
    mediaIdades = calcularMediaIdades(turma,n);
    printf("%.2f",mediaIdades);
    return 0;
}

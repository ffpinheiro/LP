#include <stdio.h>
#include <stdlib.h>

int bb_rec(int v[],int ini,int fim, int chave){
    int meio = (ini + fim) / 2;
    // cond. parada 1:chave encontrada
    if(v[meio] == chave)
        return meio;
    // cond. parada 2: chave não existe no vetor
    else if(fim<ini)
        return -1;
    else{
        // se a chave for menor que o elemento do meio
        if(chave < v[meio]){
            return bb_rec(v,ini,meio-1,chave);
        }else{
            return bb_rec(v,meio+1,fim,chave);
        }
    }
}

int main()
{
    int vet[] = {3,8,12,52,78,81,105,147,208,222};
    int chave = 52;
    printf("Posicao da chave = %d",bb_rec(vet,0,9,chave));
    return 0;
}

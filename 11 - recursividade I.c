#include <stdio.h>
#include <stdlib.h>

int soma(int v[],int n){
    if(n == 0){
        return v[0];
    }else{
        return (v[n] + soma(v,n-1));
    }
}

int main()
{
    int tam=5, vetor[] = {1,2,3,4,5}, somaRecursiva;
    somaRecursiva = soma(vetor,tam-1);
    printf("somaRecursiva: %d\n",somaRecursiva);
    return 0;
}

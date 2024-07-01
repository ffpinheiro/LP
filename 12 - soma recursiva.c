#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[] = {10,20,30,40,50},n=4;

    printf("Soma recursiva = %d\n",soma_rec(vet,n));
    imprime_rec(vet,n);
    return 0;
}

int soma_rec(int v[],int n){
    if(n==0){
        return v[n];
    }else{
        return v[n] + soma_rec(v,n-1);
    }
}

void imprime_rec(int v[],int n){
    if(n==0){
        printf("%d: %d",n,v[n]);
    }else{
        printf("%d: %d \n",n,v[n]);
        imprime_rec(v,n-1);
    }
}

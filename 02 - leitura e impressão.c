#include <stdio.h>
#include <locale.h>

int scanN(){
    int n;
    scanf("%i",&n);
    return n;
}

void printN(int n){
    printf("Número lido: %i",n);
}

int main() {
    setlocale(LC_ALL,"portuguese");
    int n=0;
    puts("Digite o número: ");
    n = scanN();
    printN(n);
    return 0;
}

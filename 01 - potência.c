#include <stdio.h>
#include <locale.h>

double pot(double a, int b){
    double res = 1;
    for(int i=0;i<b;i++){
        res = res*a;
    }
    return res;
}

int main() {
    setlocale(LC_ALL,"portuguese");
    double a=0, resultado=0;
    int b=0;

    printf("Digite a base: ");
    scanf("%lf", &a);
    printf("Digite a potência: ");
    scanf("%d", &b);
    resultado = pot(a,b);
    printf("\nResultado: %lf\n",resultado);
    return 0;
}

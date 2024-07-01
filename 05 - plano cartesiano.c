#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct ponto{
    double x;
    double y;
}ponto;

ponto registrarPonto(ponto ponto){
    puts("Digite o valor de x: ");
    scanf("%lf", &ponto.x);
    puts("Digite o valor de y: ");
    scanf("%lf", &ponto.y);
    return ponto;
}

ponto somarPontos(ponto ponto1, ponto ponto2){
    ponto pontoResultado;
    pontoResultado.x = ponto2.x + ponto1.x;
    pontoResultado.y = ponto2.y + ponto1.y;
    return pontoResultado;
}

ponto subtrairPontos(ponto ponto1, ponto ponto2){
    ponto pontoResultado;
    pontoResultado.x = ponto2.x - ponto1.x;
    pontoResultado.y = ponto2.y - ponto1.y;
    return pontoResultado;
}

ponto multiplicarPontos(ponto ponto1, ponto ponto2){
    ponto pontoResultado;
    pontoResultado.x = ponto2.x * ponto1.x;
    pontoResultado.y = ponto2.y * ponto1.y;
    return pontoResultado;
}

void imprimirPonto(ponto ponto){
    printf("( %.2f , %.2f )\n",ponto.x,ponto.y);
}

int main()
{
    setlocale(LC_ALL,"portuguese");

    //ponto1
    ponto ponto1;
    puts("\nPONTO 1");
    ponto1 = registrarPonto(ponto1);

    //ponto2
    ponto ponto2;
    puts("\nPONTO 2");
    ponto2 = registrarPonto(ponto2);

    //soma
    ponto pontoSoma = somarPontos(ponto1, ponto2);
    //subtra��o
    ponto pontoSub = subtrairPontos(ponto1, ponto2);
    //multiplica��o
    ponto pontoMult = multiplicarPontos(ponto1, ponto2);

    //impress�o
    puts("");
    printf("Soma: ");
    imprimirPonto(pontoSoma);
    printf("Subtra��o: ");
    imprimirPonto(pontoSub);
    printf("Multiplica��o: ");
    imprimirPonto(pontoMult);


    return 0;
}

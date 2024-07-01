#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void somaMat(double mat1[100][100], double mat2[100][100],double matRes[100][100], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            matRes[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void printMat(double matRes[100][100],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(matRes[i][j] < 10){
                printf(" %.0lf ",matRes[i][j]);
            }else{
                printf("%.0lf ",matRes[i][j]);
            }
        }
        puts(" ");
    }
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    double mat1[100][100] = { {1,2,3}, {4,5,6}, {7,8,9} };
    double mat2[100][100] = { {1,2,3}, {4,5,6}, {7,8,9} };
    double matRes [100][100] = { {1,2,3,4,5,6, 7,8,9}, {1,2,3,4,5,6,7,8,9}, {1,2,3,4,5,6,7,8,9},{1,2,3,4,5,6, 7,8,9}, {1,2,3,4,5,6,7,8,9}, {1,2,3,4,5,6,7,8,9},{1,2,3,4,5,6, 7,8,9}, {1,2,3,4,5,6,7,8,9}, {1,2,3,4,5,6,7,8,9}  };
    int n=0;

    printf("Digite o número de linhas e colunas. ");
    scanf("%d",&n);

    //somaMat(mat1,mat2,matRes,n);

    printMat(matRes,n);
    return 0;
}

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    //Recebe a quantidade de linhas e de colunas para a matriz.
    int linhas, colunas, n, m;
    printf("Informe a quantidade de linhas e colunas de uma matriz:\n");
    scanf(" %d %d", &linhas, &colunas);

    //Aloca memória para as linhas da matriz.
    int ** matriz;
    matriz = (int **) calloc(linhas, sizeof(int *));
    if(matriz==NULL){
        printf("Sem memória!\n");
        exit(1);
    }

    //Aloca memória para as colunhas da matriz.
    for(n=0; n < linhas; n++){
        matriz[n] = (int *) calloc(colunas, sizeof(int *));
    }

    //Recebe os elementos para a matriz.
    printf("Informe valores para a matriz:\n");
    for(n=0; n<linhas; n++){
        for(m=0; m<colunas; m++){
            scanf("%d", &matriz[n][m]);
        }
    }

    //Imprime os valores da matriz.
    for(n=0; n<linhas; n++){
        for(m=0; m<colunas; m++){
            printf("%d\n", matriz[n][m]);
        }
    }


    int ** matrizt;
    matrizt = (int **) calloc(linhas, sizeof(int *));
    if(matrizt==NULL){
        printf("Sem memória!\n");
        exit(1);
    }
    for(n=0; n < linhas; n++){
        matriz[n] = (int *) calloc(colunas, sizeof(int *));
    }

    for(n=0; n<linhas; n++){
        for(m=0; m<colunas; m++){
            matrizt[n][m] = matriz[m][n];
        }
    }

    for(n=0; n<linhas; n++){
        for(m=0; m<colunas; m++){
            printf("%d\n", matrizt[n][m]);
        }
    }



    //Libera a memória alocada para a matriz.
    for(n=0 ; n<linhas; n++){
        free(matriz[linhas]);
    }
    free(matriz);

    for(n=0 ; n<linhas; n++){
        free(matrizt[linhas]);
    }
    free(matrizt);

    return 0;
}
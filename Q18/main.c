#include <stdio.h>
#include <stdlib.h>

void produto_mat(int **m1, int **m2, int **m3, int nla, int nca, int ncb){

    int i=0, j=0, k=0, aux=0;

    for(k=0; k<nla; k++){
        for(i=0; i<ncb; i++){
            aux=0;
            for(j=0; j<nca; j++){
                aux=aux+(m1[k][j]*m2[j][i]);
            }
            m3[k][i]=aux;
        }
    }
}
//Função que recebe 3 matrizes e guarda o produto das dua primeiras na terceira.

int main()
{
    int **a,**b,**c, i=0, j=0, nla=0,nlb=0, nca=0, ncb=0;

    printf("Quantas linhas na matriz A ?\n");
    scanf("%d", &nla);
    printf("Quantas colunas na matriz A ?\n");
    scanf("%d", &nca);
    printf("Quantas colunas na matriz B ?\n");
    scanf("%d", &ncb);
    nlb=nca;
    //Recebe o numero de linhas e colunas para matrizes.

    a=malloc(nla*sizeof(int*));
    a[0]=malloc(nca*nla*sizeof(int));
    b=malloc(nlb*sizeof(int*));
    b[0]=malloc(ncb*nlb*sizeof(int));
    c=malloc(nla*sizeof(int*));
    c[0]=malloc(nla*ncb*sizeof(int));
    //Aloca dinamicamente espaço na memoria para as matrizes

    for(i=1; i<nla; i++){
        a[i]=a[i-1]+nca;
    }
    for(i=1; i<nlb; i++){
        b[i]=b[i-1]+ncb;
    }
    for(i=1; i<nla; i++){
        c[i]=c[i-1]+ncb;
    }
    //Aponta o inicio de cada linha das respectivas matrizes.

    printf("Preencha a matriz A...\n");
    for(i=0; i<nla; i++){
        for(j=0; j<nca; j++){
            printf("Digite um inteiro \n");
            scanf("%d",&a[i][j]);
        }
    }

    printf("Preencha a matriz B...\n");
    for(i=0; i<nlb; i++){
        for(j=0; j<ncb; j++){
            printf("Digite um inteiro \n");
            scanf("%d",&b[i][j]);
        }
    }
    //Recebe do usuario valores para preenchimento das matrizes.

    produto_mat(a, b, c, nla,nca,ncb);
    //Chamada da função de produto de duas matrizes.

    printf("Matriz resultante: \n");
    for(i=0; i<nla; i++){
        for(j=0; j<ncb; j++){
            printf("%d ",c[i][j]);

        }
        printf("\n");
    }
    //Imprime na tela o produto das matrizes.

    free(c[0]);
    free(b[0]);
    free(a[0]);
    free(c);
    free(b);
    free(a);
    //Libera a memoria alocada dinamicamente.

    return 0;
}

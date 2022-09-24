#include <stdio.h>
#include <stdlib.h>

void soma_vet(int *v1, int *v2, int *v3, int n){

    int i=0;
    for(i=0; i<n; i++){
        v3[i]=v1[i]+v2[i];
    }

}
//Função que recebe tres vetores e armazena a soma dos dois primeiros no terceiro.

int main()
{
    int *num1,*num2,*num3, i=0, n=0;

    printf("Qual o tamanho dos vetores ?\n");
    scanf("%d", &n);
    //Recebe do usuario o tamanho dos vetores.

    num1=malloc(n*sizeof(int));
    num2=malloc(n*sizeof(int));
    num3=malloc(n*sizeof(int));
    //Alocação dinamica de memoria para os tres vetores.

    printf("Preencha o primeiro vetor...\n");
    for(i=0; i<n; i++){
        printf("Digite um inteiro \n");
        scanf("%d",&num1[i]);
    }
    //Recebe do usuario os valores do primeiro vetor.

    printf("Preencha o segundo vetor...\n");
    for(i=0; i<n; i++){
        printf("Digite um inteiro \n");
        scanf("%d",&num2[i]);
    }
    //Recebe do usuario os valores do segundo vetor.

    soma_vet(num1, num2, num3, n);
    //Chamada da função de soma.

    printf("Vetor resultante: \n");
    for(i=0; i<n; i++){
        printf("%d ", num3[i]);
    }
    //Imprime na tela o vetor resultado.
    free(num1);
    free(num2);
    free(num3);
    //Libera a memoria alocada dinamicamente.

    return 0;
}

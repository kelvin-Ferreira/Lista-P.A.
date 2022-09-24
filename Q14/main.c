#include <stdio.h>
#include <stdlib.h>

int comp(const void *num1, const void *num2) {
   return ( *(int*)num1 - *(int*)num2 );
}
// Função de comparação de 2 valores chamada pela função 'qsort'.
// negativo p/ n2>n1, positivo p/ n1>n2, 0 p/ n1=n2.

int main()
{
    int *num, i=0, n=0;

    printf("Qual o tamanho do vetor ?\n");
    scanf("%d", &n);
     //recebe o tamanho do vetor pelo usuario.

    num=malloc(n*sizeof(int));
    //Alocação dinamica de memoria.

    for(i=0; i<n; i++){
        printf("Digite um inteiro \n");
        scanf("%d",&num[i]);
    }
    //Preenche vetor com numeros de escolha do suario.

    qsort(num,n,sizeof(int),comp);
    //função para ordenação de valores em um vetor.

    printf("Vetor ordenado:\n");
    for(i=0; i<n; i++){
        printf("%d ", num[i]);
    }
    //Imprime vetor ordenado.

    free(num);
    //Liberação de memoria.

    return 0;
}

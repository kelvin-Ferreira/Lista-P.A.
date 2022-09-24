#include <stdio.h>
#include <stdlib.h>

    void ordena_vet(int *v1, int n){
        int i=0, j=0, aux=0;

        for(i = 0; i < n-1; i++){
              for(j = i+1; j < n; j++){
                  if(v1[i] > v1[j]){
                       aux = v1[i];
                       v1[i] = v1[j];
                       v1[j] = aux;
                }
            }
        }
    }
    //Função que recebe um vetor de inteiros e retorna em ordem crecente.

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

    ordena_vet(num,n);
    //Chamada da função de ordenação.

    printf("Vetor ordenado:\n");
    for(i=0; i<n; i++){
        printf("%d ", num[i]);
    }
    //Imprime vetor ordenado.

    free(num);
    //Liberação de memoria alocada.

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
    time_t inicio, fim;
    float tempo;
    inicio=time(NULL);
    //Uso da função time para marcar o tempo da inicialização do programa.

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
    printf("\n");
    //Imprime vetor ordenado.

    free(num);
    //Liberação de memoria alocada.

    fim=time(NULL);
    //Uso da função time para marcar o tempo de encerramento do programa.

    tempo= difftime(fim, inicio);
    printf("Tempo de execussão: %f s\n", tempo);
    //Calcula a diferença entre o tempo inial e final
    //Imprime na tela o tempo de execussão.

    return 0;
}

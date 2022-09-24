#include <stdio.h>
#include <stdlib.h>

int comp(const void *num1, const void *num2) {
   return ( *(int*)num1 - *(int*)num2 );
}
//Função de comparação.
void ordenar(int *vet, int n, int (*f)(const void*, const void*)){
    int i=0, j=0, aux=0;
    for(i=1; i<n; i++){
        for(j=0;j<n;j++){
            if(f(&vet[i],&vet[j])<0){
                aux=vet[i];
                vet[i]=vet[j];
                vet[j]=aux;
            }
        }
    }
}
//Função de ordenação usando ponteiro para função.

int main()
{
    int *vet, n=0, i=0, (*p) (const void*, const void*)=comp;

    printf("Tamanho do vetor: \n");
    scanf("%d", &n);

    vet=malloc(n*sizeof(int));
    //Alocação de memoria.

    for(i=0; i<n; i++){
        printf("Digite um inteiro...");
        scanf("%d", &vet[i]);
    }
    //Preenchimento do vetor.

    ordenar(vet,n,p);
    //Chamada da função de ordenação.

    printf("Vetor ordenado: ");
    for(i=0; i<n; i++){
        printf("%d ",vet[i]);
    }
    //Impressao do vetor ordenado.

    free(vet);
    //Liberação da memoria alocada.
    return 0;
}

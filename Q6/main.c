#include <stdio.h>

int main()
{
    int pulo[]={11,22,33};
    printf("%d ",*(pulo + 2));
    printf("%d ",*(pulo + 4));
    printf("%d ",pulo + 4);
    printf("%d ",pulo + 2);
    return 0;

    // *(pulo + 2) é a unica expressão que referencia o valor do terceiro elemento do vetor.
}

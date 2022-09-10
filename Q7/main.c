#include <stdio.h>

int main()
{
    int mat[]={11,22,33,44}, *p, x=0;

    p = mat + 1;
    printf("%d ",*p);
    //p = mat++;
    //p = ++mat;
    x = (*mat)++;
    printf("%d \n",x);

    return 0;

    //a função (mat + 1) funciona corretamente.
    /* As expressões (p = mat++) e (p = ++mat) não são validas devido a erro de sintaxe,
     * pois utilizam o operador de encremento '++' no vetor. */
    /* A expressão ((*mat)++) é valida, porem não funciona como deveria,
     * pois o operador de encremento '++' deveria anteceder o valor do vetor. */
}

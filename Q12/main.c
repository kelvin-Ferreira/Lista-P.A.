#include <stdio.h>

float peso(float m){
    return (m*9.8);
}
//Função que recebe o valor da massa em float de um objeto e retorna sua força peso.
int main()
{
    float (*p) (float)=peso, m=0;
    //Ponteiro que guarda o endereço de referencia da função.

    printf("Inflorme a massa no objeto...\n");
    scanf("%f", &m);
    //Recebe o valor da massa do usuario.

    printf("Força Peso: %fN", p(m));
    /*Imprime na tela o valor de 'p(m)' que seria o valor esperado da
     *chamada da função 'peso(m)', sendo assim, 'p(m)' assume o papel
     *da proprima função */

    return 0;
}

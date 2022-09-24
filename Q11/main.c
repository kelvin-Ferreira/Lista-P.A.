#include <stdio.h>

int main()
{
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;

    aloha[2] = value;
    scanf("%f", &aloha);
    aloha = value; //(aloha = value) não indica a posição no vetor que deve receber o valor de "value".
    printf("%f", aloha);
    coisas[4][4] = aloha[3];
    coisas[5] = aloha; //(coisas[5] = aloha) tenta associar uma linha da matriz com os valores guardados no vetor utilizando a sitaxe errada.
    pf = value; //(pf = value) esta incorreto pois tenta guardar o valor de uma variavel num ponteiro.
    pf = aloha;

    return 0;
}

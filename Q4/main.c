#include <stdio.h>

int main()
{
    int valor;
    int *p1;
    float temp;
    float *p2;
    char aux;
    char *nome = "Ponteiros";
    char *p3;
    int idade;
    int vetor[3];
    int *p4;
    int *p5;

    /* (a) */
    valor = 10;
    p1 = &valor;
    *p1 = 20;
    printf("%d \n", valor);
    //'p1' recebe o endereço do inteiro 'valor', 20 é atribuido a variavel atravez do ponteiro.

    /* (b) */
    temp = 26.5;
    p2 = &temp;
    *p2 = 29.0;
    printf("%.1f \n", temp);
    //'p2' recebe o endereço do float 'temp', 29.0 é atribuido a variavel atravez do ponteiro.

    /* (c) */
    p3 = &nome[0];
    aux = *p3;
    printf("%c \n", aux);
    //'p3' recebe o endereço do caracter 'nome[0]', aux o valor (P) do endereço gurdado no ponteiro.

    /* (d) */
    p3 = &nome[4];
    aux = *p3;
    printf("%c \n", aux);
    //'p3' recebe o endereço do caracter 'nome[4]', aux o valor (e) do endereço gurdado no ponteiro.

    /* (e) */
    p3 = nome;
    printf("%c \n", *p3);
    //imprime o valor no endereço de nome[0] guardado no ponteiro.

    /* (f) */
    p3 = p3 +4;
    printf("%c \n", *p3);
    //imprime o valor no endereço guardado no ponteiro, mais 4 (nome[4]).

    /* (g) */
    p3--;
    printf("%c \n", *p3);
    //imprime o valor no endereço guardado no ponteiro, menos 1 (nome[3]).

    /* (h) */
    vetor[0] = 31;
    vetor[1] = 45;
    vetor[2] = 27;
    p4 = vetor;
    idade = *p4;
    printf("%d \n", idade);
    //'p4' recebe o endereço de vetor[0], 'idade' recebe o valor do endereço guardado em 'p4'(31).

    /* (i) */
    p5 = p4 +1;
    idade = *p5;
    printf("%d \n", idade);
    //'p5' recebe o endereço guardado em 'p4' mais 1 (vetor[1])
    //'idade' recebe o valor do endereço guardado em 'p5'(45).

    /* (j) */
    p4 = p5 +1;
    idade = *p4;
    printf("%d \n", idade);
    //'p4' recebe o endereço guardado em 'p5' mais 1 (vetor[2])
    //'idade' recebe o valor do endereço guardado em 'p4'(27).

    /* (l) */
    p4 = p4 -2;
    idade = *p4;
    printf("%d \n", idade);
    //'p4' recebe o endereço guardado em 'p4' menos 1 (vetor[0])
    //'idade' recebe o valor do endereço guardado em 'p4'(31).

    /* (m) */
    p5 = &vetor[2] - 1;
    printf("%d \n", *p5);
    //'p5' recebe o endereço de vetor[2]-1, (vetor[1]=45).

    /* (n) */
    p5++;
    printf("%d \n", *p5);
    //'p5' recebe o endereço de vetor[1]+1, (vetor[2]=27).


    return(0);

    // O programa funciona corretamente.
}

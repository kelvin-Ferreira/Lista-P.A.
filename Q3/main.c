#include <stdio.h>

int main()
{
    int i=1, j=2, *p, *q;
    p = i;
    q = &j;
    p = &*&i;
    i = (*&)j;
    i = *&j;
    i = *&*&j;
    q = *p;
    i = (*p)++ + *q;
    //(p = i) esta atribuindo um valor inteiro a um ponteiro de inteiro.
    //(i = (*&)j) sintaxe incorretamente.
    //(q = *p) esta atribuindo um valor inteiro guardado no endereço referenciado em 'p' a um ponteiro de inteiros.
}

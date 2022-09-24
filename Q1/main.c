#include <stdio.h>

int main()
{
  int i=3,j=5;
  int *p, *q;
  p = &i;
  q = &j;
  printf ("%d \n",p == &i);
  //Retorna verdadeira para a afirmação
  printf ("%d \n",*p - *q);
  //Retorna o subtração do valor guardados nos endereços dos ponteiros (3-5=-2).
  printf ("%d \n",**&p);
  //Retorna o valor guardado no valor (endereço de i) do endereço do ponteiro 'p' .
  printf ("%d \n",(3 - *p/(*q) + 7));
  //Retorna o resultado da equação (3-(3/5)+7=10.6) como os valores são inteiros o retorno é 10.

  return 0;
}

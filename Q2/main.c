#include <stdio.h>

int main()
{
  int i=5, *p;
  p = &i;
  printf("%x %d %d %d %d \n", p,*p+2,**&p,3**p,**&p+4);
  /*'p' retorna o endereço de i, (*p+2) retorna o valor de i mais 2 (5+2=7),
   (**&p) retorna o valor salvo no endereço guardado no endereço do ponteiro 'p'(5),
   (3**p) retorna tres vezes o valor de i (3*5=15), (**&p+4) retorna retorna o valor
   salvo no endereço guardado no endereço do ponteiro 'p' mais 4 (5+4=9). */

  return 0;
}

#include <stdio.h>

int main(){

  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
  printf("%X ",vet+i);
  }

  return 0;

  //O programa imprime o endereço dos valores guardados no vetor.
}


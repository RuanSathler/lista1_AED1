#include <stdio.h>

int LerInt(){
  int tempValor;
  scanf("%d", &tempValor);

  return tempValor;
}

void CalculaTriplo(int valor){
  valor = valor * 3;

  printf("%d", valor);
}

int main(){
  int num;
  
  num = LerInt();
  CalculaTriplo(num);
  
  return 0;
}
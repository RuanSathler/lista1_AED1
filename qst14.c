#include <stdio.h>
#include <math.h>
#define PI 3.14

int LerInt(){
  int tempValor;
  scanf("%d", &tempValor);

  return tempValor;
}

void CalculaEsfera(int valor){
  float esfera;

  esfera = (4 * PI * (valor * valor * valor)) / 3;

  printf("%.2f", esfera);
}

int main(){
  int num;
  
  num = LerInt();
  CalculaEsfera(num);
  
  return 0;
}
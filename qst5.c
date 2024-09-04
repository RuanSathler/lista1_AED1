#include <stdio.h>

double LerDouble(){
  double numLido;
  scanf("%lf", &numLido);

  return numLido;
}

int main(){

  double qntMilhas, qntMetros;
  
  qntMilhas = LerDouble();

  qntMetros = qntMilhas * 1.609;

  printf("%.2lf", qntMetros);
  
  return 0;
}
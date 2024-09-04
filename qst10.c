#include <stdio.h>

int LerInt(){
  int elemento;
  scanf("%d", &elemento);

  return elemento;
}

void ImprimeTempo(int num){
  int hora, minuto, segundo;

  segundo = num % 60;
  minuto = (num / 60) % 60;
  hora = (num / 60) / 60;

  printf("%.2d:%.2d:%.2d", hora, minuto, segundo);
}

int main(){

  int num;

  num = LerInt();

  ImprimeTempo(num);

  return 0;
}
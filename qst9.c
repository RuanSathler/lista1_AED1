#include <stdio.h>

int LerInt(){
  int elemento;
  scanf("%d", &elemento);

  return elemento;
}

int main(){

  int caractere;

  caractere = LerInt();

  printf("%c", (char)caractere);
  return 0;
}
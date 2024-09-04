#include <stdio.h>

char LerChar(){
  char elemento;
  scanf("%c", &elemento);

  return elemento;
}

int main(){

  char caractere;

  caractere = LerChar();

  printf("%d", (int)caractere);
  return 0;
}
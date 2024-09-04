#include <stdio.h>


int LerInt(){
  int elemento;
  scanf("%d", &elemento);

  return elemento;
}

int main(void){

  int num1, num2, num3;

  num1 = LerInt();
  num2 = LerInt();
  num3 = LerInt();

  if((num1 > 0)||(num2 > 0)||(num3 > 0)){
    printf("1");
  }
  else{
    printf("0");
  } 
  
  return 0;  
}
#include <stdio.h>

int LerInt(){
  int numLido;
  scanf("%d", &numLido);

  return numLido;
}

int main(){

  int num1, num2, num3;

  num1 = LerInt();
  num2 = LerInt();
  num3 = LerInt();
  
  if((num1<=num2)&&(num2<=num3)){
    printf("1 \n");
  }
  else{
    printf("0");
  }
  
  
  return 0;
}
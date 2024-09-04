#include <stdio.h>

int main(){

  float tempF, tempC;
  scanf("%f", &tempC);

  tempF = 1.8*tempC+32;

  printf("%.2f", tempF);
  
  return 1;
}
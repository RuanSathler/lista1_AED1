#include <stdio.h>

int main(){

  float tempF, tempC;
  scanf("%f", &tempF);

  tempC = (tempF-32)/1.8;

  printf("%.2f", tempC);
  
  return 0;
}
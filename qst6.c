#include <stdio.h>
#include <stdbool.h> 

int main(void){

  printf("char: %lu bytes\n", sizeof(char));
  printf("unsigned char: %lu bytes\n", sizeof(unsigned char));
  printf("short int: %lu bytes\n", sizeof(short int));
  printf("unsigned short int: %lu bytes\n", sizeof(unsigned short int));
  printf("int: %lu bytes\n", sizeof(int));
  printf("long int: %lu bytes\n", sizeof(long int));
  printf("unsigned long int: %lu bytes\n", sizeof(unsigned long int));
  printf("float: %lu bytes\n", sizeof(float));
  printf("double: %lu bytes\n", sizeof(double));
  printf("bool: %lu bytes\n", sizeof(bool));
  printf("void: %lu bytes\n", sizeof(void));

  return 0;
}
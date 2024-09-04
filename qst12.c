#include <stdio.h>

void ImprimeQntNotas(int nota, int qntNota){
  printf("R$%d: %d\n", nota, qntNota);
}

void CalculaNotas(int valor){
  int vetor[7] = {100, 50, 20, 10, 5, 2, 1};
  int tempValor, cont;


  //calcula a quantidade de notas e os substitui onde estão seus valores
  for(cont = 0; cont < 7; cont++){
    
    tempValor = vetor[cont];
    vetor[cont] = valor / vetor[cont];
    valor = valor % tempValor;
    ImprimeQntNotas(tempValor, vetor[cont]);
  }    
  }


int LerInt(){
  int tempValor;
  scanf("%d", &tempValor);

  return tempValor;
}

int main(){
  int num;
  
  num = LerInt();
  CalculaNotas(num);
  
  return 0;
}
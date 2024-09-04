#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846264338327950288

float LerFloat(){
  float numLido;
  scanf("%f", &numLido);

  return numLido;
}

float CalculaCoss(float angulo){
  float coss, RadianoDoAngulo;

  RadianoDoAngulo = (PI * angulo)/180.0;

  coss = cos(RadianoDoAngulo);
  return coss;
}

void MostraDistancia(float distancia1, float distancia2, float angulo){
  float distancia;

  distancia = sqrt((distancia1 * distancia1) + (distancia2 * distancia2) -2*(distancia1 * distancia2) * CalculaCoss(angulo) );
  printf("%.2f", distancia);
}

int main(){

  float distancia1, distancia2, angulo;
  distancia1 = 1.0;
  distancia2 = 1.0;
  angulo = 1.0;
  
  distancia1 = LerFloat();
  distancia2 = LerFloat();
  angulo = LerFloat();


  MostraDistancia(distancia1, distancia2, angulo);
  return 0;
}
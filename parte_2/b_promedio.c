#include <stdio.h>

int main () {
  /** 
   * Inicialización de variables
  */
  float calificacionLengua;
  float calificacionCiencias;
  float calificacionMatematicas;
  float promedio = 0;

  printf("Ingrese la nota de Lengua: ");
  scanf("%f", &calificacionLengua);

  printf("Ingrese la nota de Ciencias:");
  scanf("%f", &calificacionCiencias);

  printf("Ingrese la nota de Matematicas: ");
  scanf("%f", &calificacionMatematicas);

  promedio = (calificacionLengua + calificacionCiencias + calificacionMatematicas) / 3;

  printf("\nEl promedio es de %.2f", promedio);
  return 0;
}
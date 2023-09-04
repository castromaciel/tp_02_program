#include <stdio.h>
#define RECARGO 15

int main () {
  /** Inicialización de variables */
  float monto;
  int descuento;
  float montoConRecargo;
  float montoConDescuento;

  /** Se piden los datos al usuario */
  printf("Ingrese un monto: ");
  scanf("%f", &monto);
  
  printf("Ingrese un Descuento: ");
  scanf("%d", &descuento);

  /** Calculo de los montos */
  montoConRecargo = monto + (monto * 15 / 100);
  montoConDescuento = monto - (monto * descuento / 100);

  printf("El precio del producto original es: %.2f", monto);
  printf("\nEl precio del producto con recargo es: %.2f", montoConRecargo);
  printf("\nEl precio del producto con descuento es: %.2f", montoConDescuento);


  return 0;
}
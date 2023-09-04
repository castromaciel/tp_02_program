#include <stdio.h>

int main()
{
  /** Inicialización de variables */
  int num1, num2, aux;

  /** Se piden los datos al usuario */
  printf("\nAlgoritmo Invirtiendo. Debe ingresar 2 numeros\n");
  printf("Ingrese el primer numero: ");
  scanf("%d", &num1);

  printf("Ingrese el segundo numero: ");
  scanf("%d", &num2);

  /**Invitiendo los valores*/
  aux = num1;
  num1 = num2;
  num2 = aux;

  printf("\nLos valores fueron invertidos!\n");
  printf("Numero 1: %d\n", num1);
  printf("Numero 2: %d\n", num2);

  return 0;
}

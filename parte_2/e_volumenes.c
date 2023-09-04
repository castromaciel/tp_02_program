#include <stdio.h>
#define PI 3.14

int main()
{
  /** Inicialización de variables */
  float radio, altura, volumenCilindro, volumenEsfera;

  /** Se piden los datos al usuario */
  printf("Ingrese el valor de la altura en 'm': ");
  scanf("%f", &altura);

  printf("Ingrese el valor del radio en 'mm': ");
  scanf("%f", &radio);

  /** Conversión de valores a cm */
  altura = altura * 100;
  radio = radio / 10;

  /** Calculo de los volumenes */
  volumenCilindro = PI * radio * radio * altura;
  volumenEsfera = (PI * 4 * radio * radio * radio) / 3;

  printf("\nEl volumen del cilindro es de: %.2fcm", volumenCilindro);
  printf("\nEl volumen de la esfera es de: %.4fcm", volumenEsfera);

  return 0;
}

#include <stdio.h>

int main () {
	int incremento, decremento;
	printf("Ingrese dos numeros:");
	printf("\nIncremento: ");
	scanf("%d", &incremento);
	
	printf("\nDecremento: ");
	scanf("%d", &decremento);	
	incremento = incremento + 1;
	// incremento += 1;
	
	decremento = decremento + 1;
	// decremento += 1	;
	
	printf("\n--Resultado: --");
	printf("\nIncremento: %d", incremento);
	printf("\nDecremento: %d", decremento);
}

/*#include <stdio.h>

int main() {
	int contador = 0;
	float nota, suma = 0, promedio;
	
	while (contador < 10) {
		printf("Ingrese la nota del estudiante %d: ", contador + 1);
		scanf("%f", &nota);
		
		if (nota >= 0 && nota <= 10) {
			suma += nota;
			contador++;
		} else {
			printf("Nota inválida. Debe estar entre 0 y 10.\n");
		}
	}
	
	promedio = suma / 10;
	printf("El promedio del curso es: %.2f\n", promedio);
	
	return 0;
}
*/


#include <stdio.h>

int main() {
	int contador = 0;
	float nota, suma = 0, promedio;
	
	while (contador < 10) {
		printf("Ingrese la nota del estudiante %d: ", contador + 1);
		scanf("%f", &nota);
		
		suma += nota;
		contador++;
	}
	
	promedio = suma / 10;
	printf("El promedio del curso es: %.2f\n", promedio);
	
	return 0;
}

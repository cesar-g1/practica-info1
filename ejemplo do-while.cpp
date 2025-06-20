#include <stdio.h>

int main() {
	int contador=0;
	float nota,suma=0,promedio;
	
	do{
		printf("Ingrese la nota del estudiante %d: ",contador+1);
		scanf("%f",&nota);
		
		suma+=nota;
		contador++;
		
	} while(contador<10);
	promedio=suma/10;
	printf("El promedio de las notas es: %.2f\n",promedio);
	
	return 0;
}


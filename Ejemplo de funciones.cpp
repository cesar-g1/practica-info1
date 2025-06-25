#include <stdio.h>

void ingresar_dos_num_y_sumar(void);
void ingresar_dos_num_y_restar(void);
void ingresar_dos_num_y_multiplicar(void);

int main(void) {
	
	int op;
	printf("1)Suma\n2)Resta\n3)Producto");
	printf("Ingrese una operación:");
	scanf("%d", &op);
	switch(op){
	case 1:
		ingresar_dos_num_y_sumar();
		// Completar
		break;
		
	case 2:
		ingresar_dos_num_y_restar();
		break;
		
	case 3:
		ingresar_dos_num_y_multiplicar();
	default:
		printf("No hay nadita");
		// Completar
		break;
	}
	
	return 0;
}
void ingresar_dos_num_y_sumar(void){
	int num1,num2;
	printf("Ingrese el primer numero: ",num1);
	scanf("%d",&num1);
	printf("Ingrese el segundo numero: ",num2);
	scanf("%d",&num2);

	int suma=num1+num2;

	printf("La suma es:%d",suma);
}
void ingresar_dos_num_y_restar(void){	
	int num1,num2;
	printf("Ingrese el primer numero: ",num1);
	scanf("%d",&num1);
	printf("Ingrese el segundo numero: ",num2);
	scanf("%d",&num2);
	
	printf("La resta es: %d",num1-num2);
}
void ingresar_dos_num_y_multiplicar(void){	
	int num1,num2;
	printf("Ingrese el primer numero: ",num1);
	scanf("%d",&num1);
	printf("Ingrese el segundo numero: ",num2);
	scanf("%d",&num2);

	int producto=num1*num2;

	printf("La multiplicacion es: ",producto);
}
	
	int ingreso_y_validacion(void);
	int main() {
		
		int resultado;
		
		resultado=ingreso_y_validacion();
		printf("El resultado es: %d\n",resultado);
		
		return 0;
	}
	//segundo ejercio
	//solo ingrese positivos
	int ingrese_y_validacion(void){
		int num;
		do{
			printf("Ingrese un numero: ");
			scanf("%d",&num);
			if(num<0){
				printf("Numero incorrecto, intente nuevamente\n");
			}
			
		} while(num<0);
		
		return num;
	}
		

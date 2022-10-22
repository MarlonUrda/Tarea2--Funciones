//Marlon Urdaneta Programacion 2

#include<stdio.h> //Declaracion de librerias
#include<windows.h>

int a, b, opc, end=0; //Declaracion de variables

int Recepcion_variables(); //Prototipado de funciones

int Suma();

int Resta();

int Multiplicacion();

int Division();

int main(){ //Funcion principal donde llamaremos las funciones
do{
	end = 0;
	system("cls");

	printf("MENU\n\n1.Sumar\n2.Restar\n3.Multiplicar\n4.Dividir\n\n"); //Opciones del menu
	printf("Eliga una opcion: ");
	scanf("%d", &opc);
	
	system("cls"); //Limpieza de la pantalla
	
	switch(opc){ //Menu para llamar a las funciones
		case 1: Suma();
		break;
		
		case 2: Resta();
		break;
		
		case 3: Multiplicacion();
		break;
		
		case 4: Division();
		break;
		
		default: printf("Dato invalido, intente de nuevo"); //Opcion en caso que el usuario ingrese una opcion no valida
		break;
	}
	
	printf("Le gustaria realizar otra operacion?\n\n\t0.Si    1.No\n\nIngrese aqui: ");
	scanf("%d", &end); //Pregunta para saber si se va a repetir el proceso o saldra del programa
	
}while(end != 1); //Condicion para terminar el ciclo repetitivo
	return 0;
}

int Suma() { //Funcion suma
	int sum;
	
	printf("Ingrese el primer valor: ");
	scanf("%d", &a);
	printf("Ingrese el segundo valor: ");
	scanf("%d", &b);
	
	sum = a+b;
	
	printf("La suma es: %d\n", sum);
	
	return 0;
}

int Resta() { //Funcion resta
	int res;
	
	printf("Ingrese el primer valor: ");
	scanf("%d", &a);
	printf("Ingrese el segundo valor: ");
	scanf("%d", &b);
	
	res = a-b;
	
	printf("La resta es: %d\n", res);
	
	return 0;
}

int Multiplicacion() { //Funcion para multiplicacion
	int mult;
	
	printf("Ingrese el primer valor: ");
	scanf("%d", &a);
	printf("Ingrese el segundo valor: ");
	scanf("%d", &b);
	
	mult = a*b;
	
	printf("La multiplicacion es: %d\n", mult);
	
	return 0;
}

 Division() { //Funcion para division
	int div;
	
	printf("Ingrese el primer valor: ");
	scanf("%d", &a);
	printf("Ingrese el segundo valor: ");
	scanf("%d", &b);
	
	div = a/b;
	
	printf("La division es: %d\n", div);
	
	return 0;
}

#include <iostream>
#include <time.h>
#include <stdlib.h>
#define dimension 3
#define dimension_caracteres 4
using namespace std;
/* Realiza un programa que defina una matriz y escriba un ciclo que copie los elementos de una matriz a otra.
Realizar esto con una matriz tipo int, char y string*/

void llenar_matriz_int(int matriz[dimension][dimension]){
	for (int iterador_fila = 0; iterador_fila<dimension; iterador_fila++){
		for (int iterador_columna = 0; iterador_columna<dimension; iterador_columna++){
			matriz[iterador_fila][iterador_columna] = rand()%10;
		}
	}
}

void mostrar_matriz_int(int matriz[dimension][dimension]){
	for (int iterador_fila = 0; iterador_fila<dimension; iterador_fila++){
		for (int iterador_columna = 0; iterador_columna<dimension; iterador_columna++){
			printf ("[%d]",	matriz[iterador_fila][iterador_columna]);
		}
		cout << endl;
	}
}

void rellenar_matriz_int(int matriz[dimension][dimension], int matriz_relleno[dimension][dimension]){
	for (int iterador_fila = 0; iterador_fila<dimension; iterador_fila++){
		for (int iterador_columna = 0; iterador_columna<dimension; iterador_columna++){
			matriz_relleno[iterador_fila][iterador_columna] = matriz[iterador_fila][iterador_columna];
		}
	}
}

void mostrar_relleno_matriz (int matriz_relleno[dimension][dimension]){
	for (int iterador_fila = 0; iterador_fila<dimension; iterador_fila++){
		for (int iterador_columna = 0; iterador_columna<dimension; iterador_columna++){
			printf ("[%d]", matriz_relleno[iterador_fila][iterador_columna]);
		}
		cout << endl;
	}
}

void llenar_arreglo_caracter (char arreglo_caracteres[dimension_caracteres]){
	for (int iterador = 0; iterador<dimension_caracteres; iterador++){
		printf ("Ingresa un car%ccter, esta se guardar%c en la posici%cn %d\n", 160, 160, 162, iterador);
		cin >> arreglo_caracteres[iterador];
	}
}

void mostrar_arreglo_caracter (char arreglo_caracteres[dimension_caracteres]){
	for (int iterador = 0; iterador<dimension_caracteres; iterador++){
		printf ("[%c]", arreglo_caracteres[iterador]);
	}
}

void mostrar_palabra(char palabra[]){ //Copiar
	for (int iterador = 0; palabra[iterador]!='/0'; iterador++){
		printf ("[%s]", palabra[iterador]);
	}
}

int main(int argc, char** argv) {
	srand(time(NULL));
	int matriz[dimension][dimension], matriz_relleno[dimension][dimension];
	char arreglo_caracteres[dimension_caracteres]; //Arreglo de caracteres.
	llenar_matriz_int(matriz);
	cout << endl;
	mostrar_matriz_int(matriz);
	cout << endl;
	rellenar_matriz_int(matriz, matriz_relleno);
	cout << endl;
	mostrar_relleno_matriz(matriz_relleno);
	cout << endl;
	llenar_arreglo_caracter(arreglo_caracteres);
	mostrar_arreglo_caracter(arreglo_caracteres);
	cout << endl;
	return 0;
}

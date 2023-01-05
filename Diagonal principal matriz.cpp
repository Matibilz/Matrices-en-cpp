#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#define dimension 10
using namespace std;
/*Defina una matriz 3x3 y escriba su diagonal principal, tal que i=j.*/

void llenar_matriz(int matriz_1[dimension][dimension]){
	int a;
	for (int iterador_fila = 0; iterador_fila<dimension; iterador_fila++){
		for (int iterador_columna = 0; iterador_columna<dimension; iterador_columna++){
			 matriz_1[iterador_fila][iterador_columna] = a = rand()%10; 
		}
	}
}

void mostrar_matriz_1(int matriz_1[dimension][dimension]){
	for (int iterador_fila = 0; iterador_fila<dimension; iterador_fila++){
		for (int iterador_columna = 0; iterador_columna<dimension; iterador_columna++){
			printf ("[%d]", matriz_1[iterador_fila][iterador_columna]);
		}
		cout << endl;
	}
}

void mostrar_diagonal (int matriz_1[dimension][dimension]){
	for (int iterador_fila = 0; iterador_fila<dimension; iterador_fila++){
		for (int iterador_columna = 0; iterador_columna<dimension; iterador_columna++){
			if (iterador_fila == iterador_columna){ //Si la posición columna = fila entonces mostrar en pantalla.
				printf ("[%d]", matriz_1[iterador_fila][iterador_columna]);
			}
		}
	}
}
int main(int argc, char** argv) {
	srand(time(NULL));
	int matriz_1[dimension][dimension], a = rand()%10;
	llenar_matriz(matriz_1);
	mostrar_matriz_1(matriz_1);
	printf ("La diagonal principal es:");
	mostrar_diagonal(matriz_1);
	getch();
	return 0;
}

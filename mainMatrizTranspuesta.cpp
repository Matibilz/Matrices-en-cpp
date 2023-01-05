#include <iostream>
#include <time.h>
#include <stdlib.h>
#define dimension 10
using namespace std;

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

void transponer_matriz_int(int matriz[dimension][dimension]){
	/*Recorrer 0 fila 0 colulmna queda en la misma posicion, 0 fila 1 columna pasarlo a 1 fia 0 columna*/
	for (int iterador_fila = 0; iterador_fila<dimension; iterador_fila++){
		for (int iterador_columna = 0; iterador_columna<dimension; iterador_columna++){
			printf ("[%d]", matriz[iterador_columna][iterador_fila]);
		}
		cout <<endl;
	}
}

void suma_de_matrices(int matriz[dimension][dimension], int matriz_2[dimension][dimension], int matriz_suma[dimension][dimension]){
	for (int iterador_fila = 0; iterador_fila<dimension; iterador_fila++){ //Generar 2da matriz.
		for (int iterador_columna = 0; iterador_columna<dimension; iterador_columna++){
			matriz_2[iterador_fila][iterador_columna] = rand()%10;
			printf ("[%d]", matriz_2[iterador_fila][iterador_columna]);
		}
		cout << endl;
	}
	cout << endl;
	printf ("La suma de las matrices es\n");
	for (int iterador_fila = 0; iterador_fila<dimension; iterador_fila++){ //Sumando cada elemento de las dos matrices.
		for (int iterador_columna = 0; iterador_columna<dimension; iterador_columna++){
			matriz_suma[iterador_fila][iterador_columna] = matriz[iterador_fila][iterador_columna] + matriz_2[iterador_fila][iterador_columna];
			printf ("[%d]", matriz_suma[iterador_fila][iterador_columna]);
		}
		cout << endl;
	}
}

int main(int argc, char** argv) {
	srand (time(NULL));
	int matriz[dimension][dimension], matriz_2[dimension][dimension], matriz_suma[dimension][dimension];
	llenar_matriz_int(matriz);
	printf ("Primera matriz\n");
	mostrar_matriz_int(matriz);
	cout << endl;
	printf ("Transpuesta de matriz_1\n");
	transponer_matriz_int(matriz);
	cout << endl;
	printf ("Segunda matriz\n");
	suma_de_matrices(matriz, matriz_2, matriz_suma);
	return 0;
}

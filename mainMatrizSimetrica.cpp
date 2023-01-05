#include <iostream>
using namespace std;

void transponer(int matriz[3][3]){
	int contador = 0, cantidad_elementos = (3*3)-3; //Calculamos cantidad de elementos totales y les restamos los elementos de la diagonal principal, pues solo trabajamos con los elementos i¬=j
	for (int iterador_fila = 0; iterador_fila<3; iterador_fila++){
		for (int iterador_columna = 0; iterador_columna<3; iterador_columna++){
			if (matriz[iterador_columna][iterador_fila] == matriz[iterador_fila][iterador_columna]){
				printf ("El elemento [%d][%d] y elemento [%d][%d] son iguales: %d = %d\n", iterador_columna, iterador_fila, iterador_fila, iterador_columna, matriz[iterador_columna][iterador_fila], matriz[iterador_fila][iterador_columna]);
				contador++;
				if (iterador_fila == iterador_columna){
					contador--;
				}
			}
			if (matriz[iterador_columna][iterador_fila] != matriz[iterador_fila][iterador_columna]){
				printf ("El elemento [%d][%d] y elemento [%d][%d] son diferentes: %d = %d\n", iterador_columna, iterador_fila, iterador_fila, iterador_columna, matriz[iterador_columna][iterador_fila], matriz[iterador_fila][iterador_columna]);
			}
		}
	}
	if (contador == cantidad_elementos){
		printf ("La matriz es simetrica", cantidad_elementos);
	}
	else {
		printf ("La matriz no es simetrica");
	}
}

int main(int argc, char** argv) {
	int matriz[3][3] ={2,4,2,
					   4,6,5,
					   2,5,8};
	transponer (matriz);
	return 0;
}

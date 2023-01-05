#include <iostream>
#include <stdlib.h>
#include <time.h>
#define dimension_global_fila 3
#define dimension_global_columna 3
#define dimension_global_2_fila 5
#define dimension_2_global_columna 5
using namespace std;

/*MULTIPLICACION DE MATRICES: Para que se produzca los indices de fila de la matriz 1 y el indice columna de la matriz_2 debe ser iguales.
ANALISIS:
FECHA: 09-11-22 02:17
PROBLEMATICA: Suma de los elementos de n-fila de la matriz uno + n-columna de la matriz dos
IDEA PRINCIPAL: 
				Dos ciclos for uno para una fila y otro para la columna
IDEA SECUNDIARIA:
FUNCIONES:
PASOS:
DATOS DE PRUEBA:

	Name: generar_las_dos_matrices
	Copyright: 
	Author: Matías González Bilz
	Date: 08-11-22 23:08
	Description: Generar las dos matrices a sumar.
*/


int main(int argc, char** argv) {
	srand(time(NULL));
	int matriz_1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int matriz_2[3][3] = {{1,1,1},{4,7,1},{5,8,9}};
	int matriz_3[3][3];
	for (int iterador_fila = 0; iterador_fila<dimension_global_fila; iterador_fila++){
		for (int iterador_columna = 0; iterador_columna<dimension_global_columna; iterador_columna++){
			matriz_3[iterador_fila][iterador_columna] = 0;
			for (int iterador_comun = 0; iterador_comun<dimension_global_fila; iterador_comun++){
				matriz_3[iterador_fila][iterador_columna] = matriz_3[iterador_fila][iterador_columna] + matriz_1[iterador_fila][iterador_comun] * matriz_2[iterador_comun][iterador_columna];
			}
		}
	}
	for (int iterador_fila = 0; iterador_fila<dimension_global_fila; iterador_fila++){
		for (int iterador_columna = 0; iterador_columna<dimension_global_columna; iterador_columna++){
			printf ("[%d]", matriz_3[iterador_fila][iterador_columna]);
		}
		cout << endl;
	}
	
	return 0;
}

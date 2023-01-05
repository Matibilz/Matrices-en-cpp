#include <stdio.h>
#include <stdlib.h>
#define max_dimension 10
/*Crear tabla de multiplicar

	Name: Matriz_crear
	Copyright: GNU
	Author: Matias Gonzalez
	Date: 20-12-22 12:34
	Description: Esta funcion permite crear y mostrar la tabla de multiplicar.
	//Esta funcion tenia problemas en dev, lo revisó y estaba bien, utilizar compliador online, ahi fue donde lo cree.
*/
void matriz_crear(int m1[max_dimension][max_dimension], int dimension){
    int iterador_columna, iterador_fila;
    for (iterador_fila = 1; iterador_fila<=dimension; iterador_fila++){
        printf ("La tabla del %d ", iterador_fila);
        for (iterador_columna = 1; iterador_columna<=dimension; iterador_columna++){
            m1[iterador_fila][iterador_columna] = iterador_fila*iterador_columna;
            printf ("[%d]", m1[iterador_fila][iterador_columna]);
        }
        printf ("\n");
    }
}
int main(int argc, char *argv[]) {
	int dimension;
	printf ("Hasta que numero quieres crear tu tabla\n");
	scanf ("%d", &dimension);
	int m1[dimension][dimension];
	matriz_crear(m1, dimension);	
	return 0;
}

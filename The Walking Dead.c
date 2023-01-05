#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define EXIT_SUCCESS 0 /*Implementacion definida para terminar el proceso*/
#define fila 10
#define columna 10
/* 
PROBLEMATICA: Desarrolle un parte de un juego llamado Walking dead Game que solicite coordenadas (i, j) a un
jugador y determine si se trata de una coordenada segura o no. Inicialice aleatoriamente una matriz
de caracteres M de 20x20, donde cada celda representa el camino para ir de una ciudad i hacia una
ciudad j. Cada camino puede tener 2 estados ‘F’ (libre de zombies) y ‘Z’ (infestado de zombies), el
juego deberá indicarle en caso de estar el camino lleno de criaturas una alternativa segura y directa
partiendo desde otra ciudad.

ANALISIS:
A) CONCLUSIONES:
 a) Desarrolle un parte de un juego llamado Walking dead Game que solicite coordenadas (i, j):
    La variable se denomina matriz[2][2]
	Realizar dos ciclos for, uno para las columnas de y otro para las filas, este será una matriz cuadrada de orden 2.
b) Para generar aleatoriedad en los estados en cada casilla vamos a asignarle un peso a cada variable que será indicativa si está infectada o no lo está. 
   Ya asignados los pesos y los valores, buscamos cual estado es mayor,  
B) FORMULAS:
C= PREGUNTAS: */

/*
	Name: llenar_matriz
	Copyright: 
	Author: Matías González Bilz 
	Date: 28-10-22 20:38
	Description: Esta funcion permite rellenar la matriz cuadrada con n-elementos.
*/

void llenar_matriz (char matriz[fila][columna]){
	int iterador_fila, iterador_columna, estado_infectado, estado_libre_zombies;
	char sitio_seguro  = 'F', sitio_no_seguro ='Z';
	
	for (iterador_fila = 0; iterador_fila<fila; iterador_fila++){ //Generar matriz con aleatoriedad en los estados.
		for (iterador_columna = 0; iterador_columna<columna; iterador_columna++){
			do{ //Generamos los estados iniciales aleatorios.
		        estado_infectado = rand()%100; //Numero aleatorio entre 0-100.
		        estado_libre_zombies = rand()%100;
	        }while(estado_infectado==estado_libre_zombies); //No puede haber estados iguales ya que tiene que predominar uno.
	        if (estado_infectado>estado_libre_zombies){ //Estado infectado.
	        	matriz[iterador_fila][iterador_columna] = sitio_no_seguro;
			}
			else { //Estado limpio de zombies.
				matriz[iterador_fila][iterador_columna] = sitio_seguro;
			}
		}
	}
}

/*
	Name: recorrer_matriz
	Copyright: 
	Author: Matías González Bilz 
	Date: 28-10-22 20:38
	Description: Esta funcion permite recorrer y mostrar cada elemento de la matriz cuadrada.
*/

void recorrer_matriz (char matriz[fila][columna]){
	int iterador_fila, iterador_columna;
	for (iterador_fila = 0; iterador_fila<fila; iterador_fila++){
		for (iterador_columna = 0; iterador_columna<columna; iterador_columna++){
			printf ("[%c]", matriz[iterador_fila][iterador_columna]);
		}
		printf ("\n");
	}
}

/*
	Name: buscar_casillas_seguras
	Copyright: 
	Author: Matías González Bilz
	Date: 28-10-22 20:38
	Description: Esta funcion permite mostrar al usuario cada elemento[fila][columna] que tenga el estado "no infectado".
*/

void buscar_casillas_seguras (char matriz[fila][columna]){
	int iterador_fila, iterador_columna;
	char sitio_seguro  = 'F', sitio_no_seguro ='Z';
	for (iterador_fila = 0; iterador_fila<fila; iterador_fila++){
		for (iterador_columna = 0; iterador_columna<columna; iterador_columna++){
			if (matriz[iterador_fila][iterador_columna] == sitio_seguro){
				printf (":[%d][%d] %c es la coordenada de una ciudad segura:\n", iterador_fila, iterador_columna, matriz[iterador_fila][iterador_columna]);
			}
		}
	}
}

/*
	Name: buscar_casillas__no_seguras
	Copyright: 
	Author: Matías González Bilz
	Date: 28-10-22 20:38
	Description: Esta funcion permite mostrar al usuario cada elemento[fila][columna] que tenga el estado "infectado de zombies".
*/

void buscar_casillas__no_seguras (char matriz[fila][columna]){
	int iterador_fila, iterador_columna;
	char sitio_seguro  = 'F', sitio_no_seguro ='Z';
	for (iterador_fila = 0; iterador_fila<fila; iterador_fila++){
		for (iterador_columna = 0; iterador_columna<columna; iterador_columna++){
			if (matriz[iterador_fila][iterador_columna] == sitio_no_seguro){ //
				printf (":[%d][%d] %c es la coordenada de una no ciudad segura:\n", iterador_fila, iterador_columna, matriz[iterador_fila][iterador_columna]);
			}
		}
	}
}

/*
	Name: aleatorio_ciudad_segura
	Copyright: 
	Author: Matías González Bilz
	Date: 28-10-22 20:38
	Description: Esta funcion permite mediante el uso de aleatoriedad, generar la fila y columna correspondiente a la posicion inicial del jugador.
*/

void aleatorio_ciudad_segura_y_desarrollo(char matriz[fila][columna]){
	int iteradoraka, iteradorcolumnas, iterador_fila_2, iterador_columna_2, aleatorio_fila = rand()%fila, aleatorio_columna = rand()%columna, final_fila, final_columna;
	char sitio_seguro  = 'F', sitio_no_seguro ='Z';
		do{
			iterador_fila_2 = aleatorio_fila;
		    iterador_columna_2 = aleatorio_columna;
			if(matriz[iterador_fila_2][iterador_columna_2] == sitio_no_seguro){ //Si el valor de la posicion = 'z' entonces, volvemos a generar oto numero aleatorio
		    iterador_fila_2 = rand()%fila;
		    iterador_columna_2 = rand()%columna;
			}
		}while (matriz[iterador_fila_2][iterador_columna_2] != sitio_seguro);
		printf ("Comienzas en las cordenadas [%d][%d]\n", iterador_fila_2, iterador_columna_2); 
		//Estamos en una casilla que no está en un estado infectado.*/
	do{ //La fila y columna de termino no puede ser mayor a la dimención de la matriz.
		printf ( "Digita la posici%cn fila hasta donde quieres llegar\n", 160);
	    scanf ("%d", &final_fila);
	    printf ("Digita la posici%cn columna hasta donde quieres llegar\n", 160);
	    scanf ("%d", &final_columna);
	}while(final_fila>=fila || final_columna>=columna);
	printf ("Terminas en la posici%cn [%d][%d]\n", 160, final_fila, final_columna);
	
	for (iteradoraka = iterador_fila_2; iteradoraka<=final_fila; iteradoraka++){
		for (iteradorcolumnas = iterador_columna_2; iteradorcolumnas<=final_fila; iteradorcolumnas++){
			if (matriz[iteradoraka][iteradorcolumnas] == sitio_seguro){
				printf ("[%d][%d]\n", iteradoraka, iteradorcolumnas);
			}
		}
	}
}
	
int main (){
	char matriz[fila][columna];	
	srand(time(NULL)); //Comienza a girar la diana
	llenar_matriz(matriz);
	printf ("[MAPA]\n");
	recorrer_matriz(matriz);
	printf ("\n:::::::::::::::::");
	printf ("[SITIOS SEGUROS]");
	printf (":::::::::::::::\n");
	buscar_casillas_seguras(matriz);
	printf ("::::::::::::::::::::::::::::::::::::::::::::::::");
	printf ("\n::::::::::::::::[SITIOS NO SEGUROS]::::::::::::::::\n");
	buscar_casillas__no_seguras(matriz);
	printf (":::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	aleatorio_ciudad_segura_y_desarrollo (matriz);
	printf (":::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	return 0;
}

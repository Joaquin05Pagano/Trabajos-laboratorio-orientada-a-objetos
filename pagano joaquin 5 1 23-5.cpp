#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 15

int main(){
	char equipo[255];
	char movimiento[255];
	int tablero[n][n];
	int dado, i, j, vida = 3;
	
	tablero[i][j] = ' ';      //se ingresa el tablero vacio
	printf("\nTABLERO\n\n");
	
	for(i = 0; i < n ;i++){
		for (j = 0; j < n; j++){          //se imprime el tablero 
			tablero[i][j] = 'X';
			printf("| %c |", tablero[i][j]); 	//se reemplazan los espacios vacios por X
		}
		printf("\n");
	}
	
	
	error:
	printf("\nIngrese que equipo sos: ");		//se ingresa de que equipo es
	scanf("%s", equipo);
	
	if(strcmp(equipo, "t") == 0 || strcmp(equipo, "l") == 0){ printf("\nBien");} else{ goto error;} //se compara si esta bien o mal escrito la letra del equipo
	printf("\n\n");
	
	tablero[10][5] = 'O'; 
	tablero[7][9] = 'O';	
	tablero[14][4] = 'U'; //se reemplazan las X por pozos
	tablero[9][14] = 'U';

	
	for(i = 0; i < n ;i++){
		for (j = 0; j < n; j++){
			if(tablero[i][j] == 'O' || tablero[i][j] == 'U'){	//se imprime el tablero de nuevo reemplazando
				tablero[i][j] == 'X';
				printf("| %c |", tablero[i][j]);
			}
			printf("| %c |", tablero[i][j]);
		}
		printf("\n");
	}
	if(strcmp(equipo, "t") == 0){
		tablero[0][0] == 't';		//se imprimen las letras de los equipos en 0 0
	}
	if(strcmp(equipo, "l") == 0){
		tablero[0][0] == 'l';
	}
	
	do{ //indica para donde moverse
		printf("Indique hacia donde desea moverse A (izquierda), D (Derecha), S (Abajo), W (Arriba): ");
		scanf("%s", movimiento);
		if(movimiento == "a"){
			tablero[i][j] = tablero[i + 1][j];
		}
		if(movimiento == "d"){
			tablero[i][j] = tablero[i - 1][j];
		}
		if(movimiento == "w"){
			tablero[i][j] = tablero[i][j - 1];
		}
		if(movimiento == "s"){
			tablero[i][j] = tablero[i][j + 1];
		}

		if(equipo == "O" || equipo == "U"){
		vida--;
		if(vida == 0){ printf("\nPerdiste las 3 vidas"); return 0;} //si pisa un agujero pierde una vida
	}
	if(tablero[15][15] == 'T' || tablero[15][15] == 'L'){ //si se llega a 15 15 se termina el juego
		printf("GANO EL EQUIPO %c", equipo);
		return 0;
	}
	}while(tablero[i][j] > tablero[15][15]);
	
	
	
}


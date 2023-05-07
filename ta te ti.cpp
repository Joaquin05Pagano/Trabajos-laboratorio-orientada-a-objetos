#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

void mostrar_tablero(char tablero[3][3]){ //funcion del tablero
	int i, j;
	printf("\n\n+--tabla-actual-+\n");
    printf("+---+-+---+-+---+\n");
	for (i = 0; i < 3; i++) {
	    for (j = 0; j < 3; j++) {
	        printf("| %c | ", tablero[i][j]);
	    }
	    printf("\n");
	    printf("+---+-+---+-+---+\n");
	}
}
int main() {
	int i, j, k;
	char jugador;
	char tablero[3][3];
	int numeros_elegidos[9] = {0}; // Array para almacenar los numeros ya elegidos
	for (i = 0; i < 3; i++) {
    	for (j = 0; j < 3; j++) {
        	tablero[i][j] = ' ';
    	}
	}
	mostrar_tablero(tablero); //muestra funcion del tablero
    for(k = 0; k < 9; k++) {
        printf("\nIngrese que jugador va (X | O): ");
        scanf(" %c", &jugador);
		if(jugador == 'O'){
        printf("\n\nJUGADOR %c\n\n", jugador);
        printf("\nEs el turno del jugador %c Ingrese la fila y la columna: ", jugador);
        scanf("%d %d", &i, &j);
		tablero[i][j] = jugador;
		}
		else{
        printf("\n\nJUGADOR %c\n\n", jugador);
        printf("\nEs el turno del jugador %c Ingrese la fila y la columna: ", jugador);
        scanf("%d %d", &i, &j);
		tablero[i][j] = jugador;
		}
		mostrar_tablero(tablero); //muestra funcion del tablero reutilizandola
        
		
	//horizontal
		if(tablero[i][j] == tablero[0][0] && tablero[i][j] == tablero[0][1] && tablero[i][j] == tablero[0][2]){
			printf("\n\nFelicitaciones ha ganado el jugador %c ya que ha hecho 3 en linea", jugador);
			return 0;}
		else if(tablero[i][j] == tablero[1][0] && tablero[i][j] == tablero[1][1] && tablero[i][j] == tablero[1][2]){
			printf("\n\nFelicitaciones ha ganado el jugador %c ya que ha hecho 3 en linea", jugador);
			return 0;}
		else if(tablero[i][j] == tablero[2][0] && tablero[i][j] == tablero[2][1] && tablero[i][j] == tablero[2][2]){
			printf("\n\nFelicitaciones ha ganado el jugador %c ya que ha hecho 3 en linea", jugador);
			return 0;}
		//vertical
		else if(tablero[i][j] == tablero[0][0] && tablero[i][j] == tablero[1][0] && tablero[i][j] == tablero[2][0]){
			printf("\n\nFelicitaciones ha ganado el jugador %c ya que ha hecho 3 en linea", jugador);
			return 0;}
		else if(tablero[i][j] == tablero[0][1] && tablero[i][j] == tablero[1][1] && tablero[i][j] == tablero[2][1]){
			printf("\n\nFelicitaciones ha ganado el jugador %c ya que ha hecho 3 en linea", jugador);
			return 0;}
		else if(tablero[i][j] == tablero[0][2] && tablero[i][j] == tablero[1][2] && tablero[i][j] == tablero[2][2]){
			printf("\n\nFelicitaciones ha ganado el jugador %c ya que ha hecho 3 en linea", jugador);
			return 0;}
		//diagonal
		else if(tablero[i][j] == tablero[0][0] && tablero[i][j] == tablero[1][1] && tablero[i][j] == tablero[2][2]){
			printf("\n\nFelicitaciones ha ganado el jugador %c ya que ha hecho 3 en linea", jugador);
			return 0;}
		else if(tablero[i][j] == tablero[0][2] && tablero[i][j] == tablero[1][1] && tablero[i][j] == tablero[2][0]){
			printf("\n\nFelicitaciones ha ganado el jugador %c ya que ha hecho 3 en linea", jugador);
			return 0;}
    }
}

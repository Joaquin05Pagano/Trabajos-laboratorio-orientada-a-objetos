#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

char tablero[10][10];
int posj[2]; // = {0, 0} -> tablero[0][0] = '0'

void mostrar_tablero(char tablero[10][10], int posj[2]) { //funcion del tablero (Imprime el tablero)
  for (int i = 0; i < 10; i++) {
		printf("+---+-+---+-+---+-+---+-+---+-+---+-+---+-+---+-+---+-+---+\n");
		for (int j = 0; j < 10; j++) {
			if (posj[1] == i && posj[0] == j) {
				printf("| J | ");
			} else {
				printf("| * | ");
			}
		}
		printf("\n");
		printf("+---+-+---+-+---+-+---+-+---+-+---+-+---+-+---+-+---+-+---+\n");	
	}
}

bool se_cayo(char tablero[10][10], int posj[2]) {
	if (tablero[posj[0]][posj[1]] == '0') {
		return true;	//dice si es la posicion en la que esta el jugador es 1 o 0, si es verdadera resta una vida
	}
	return false;     	
}

bool gano(int posj[2]) {
	if (posj[0] == 9 && posj[1] == 9) {
		return true;	//dice si es la posicion en la que esta el jugador es [9][9], si es verdadero gana
	}

	return false;
}

int main() {
	srand(time(NULL));

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {  //se reemplazan los espacios de la tabla por numeros 1
			tablero[i][j] = '1';
		}
	}

	
	for (int k = 0; k < 3; k++) { //se crean los numeros random
		int i = rand() % 10;
		int j = rand() % 10;
		// si algun numero esta repetido se hace de nuevo
		while (tablero[i][j] != '1') {
			i = rand() % 10;
			j = rand() % 10;
		}
		tablero[i][j] = '0';
	}

	int vidas = 3;
	mostrar_tablero(tablero, posj);

	while (true) {
		if (kbhit()) { // comprueba si se esta pulsando una tecla, en este caso A, S, D, W
			system("cls");
			char tecla_pulsada = getch();
	
			if (tecla_pulsada == 'w' && posj[1] >= 1){
				posj[1]--;
			}
			else if (tecla_pulsada == 's' && posj[1] < 9) {
				posj[1]++;
			}
			else if (tecla_pulsada == 'a' && posj[0] >= 1) {
				posj[0]--;
			}
			else if (tecla_pulsada == 'd' && posj[0] < 9) {
				posj[0]++;
			}
			
			mostrar_tablero(tablero, posj);  //funcion del tablero (Imprime el tablero)

			if (se_cayo(tablero, posj) && vidas > 0) {
				vidas--;
				printf("Te caiste en un pozo, te quedan %d vidas\n", vidas);
				getch();
			}
			
			else if (vidas == 0) {
				printf("PERDISTE");
				return 0;
			}

			if (gano(posj)) {
				printf("GANASTE");
				return 0;
			}
		}
	}
}

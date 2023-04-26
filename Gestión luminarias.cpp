#include<stdio.h> 
int maxcalle[5], luz, i, j, acum = 0, calle, totalluces, No_Encendidas;

int main() {
    for(i = 0; i < 5; i++){
        printf("\nIngrese la cantidad de luces que quiera en la calle N: %d: ", i);
        scanf("%d", &maxcalle[i]);
        acum = acum + maxcalle[i];
        while(maxcalle[i] < 1 || maxcalle[i]> 15){
        	printf("\n---------------\nERROR");
            printf("\n\nIngrese la cantidad de luces que quiera en la calle N: %d: ", i);
            scanf("%d", &maxcalle[i]);
        }
    }
    totalluces= 5 * 15;
    No_Encendidas = totalluces - acum;
    printf("\nIngrese la calle que quiera verificar (del 1 al 5): ");
    scanf("%d", &calle);
    while(calle < 1 || calle > 5){
        printf("\n---------------\nERROR");
        printf("\nIngrese la calle que quiera verificar (del 1 al 5): ");
        scanf("%d", &calle);
        }
        printf("\n\nla calle numero %d tiene un numero de %d luces\n\n",calle - 1,maxcalle[calle - 1]);
        printf("\nIngrese el numero de luz que quiera encender (1 al %d): ", maxcalle[calle - 1]);
        scanf("%d", &luz);
        
        if( maxcalle[calle - 1] == luz || maxcalle[calle - 1] == 0){
        printf("\n\nSe van a encender las luces maximas de esta cuadra");
        }
    while(luz > maxcalle[i - 1]){
        printf("\n---------------\nERROR");
        printf("\nIngrese el numero de luz ya ingresado que quiera encender (1 al 15): ");
        scanf("%d", &luz);
    }
    printf("\n\n\nla cantidad de lucen encendidas es de: %d ", acum);
    printf("\n\nla cantidad de luces apagadas es de: %d ", No_Encendidas);
	printf("\n---------------------------\n");
    
	printf("\n----problema----\n");
	
        if(luz == 0){
            printf("\nEsta calle es oscura\n");
        }
        else if(luz == maxcalle[i - 1]){
            printf("\n\nEsta calle esta iluminada");
        }
        else if(luz <= maxcalle[i - 1] && luz / 2 > maxcalle[calle - 1]){
            printf("\n\nEsta calle esta iluminada");
            printf("n\n");
        }
        else if(luz / 2 < maxcalle[calle - 1]){
            printf("\n\nEsta calle es tenebrosa");
        }
}

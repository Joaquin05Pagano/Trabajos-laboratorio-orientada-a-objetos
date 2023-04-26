#include<stdio.h> 
int maxcalle[5], luz, i, j, acum = 0, calle, totalluces, No_Encendidas,acumwhile = 0;

int main() {
    for(i = 0; i < 5; i++){
        printf("\nIngrese la cantidad de luces que quiera en la calle N: %d: ", i);
        scanf("%d", &maxcalle[i]);                                                                          //se ingresa la canitdad de luces que quiere prendidas por calle
        acum = acum + maxcalle[i];																            //acumulando todas las luces ingresadas para su maxima capacidad
        while(maxcalle[i] < 1 || maxcalle[i]> 15){
        	printf("\n---------------\nERROR");
            printf("\n\nIngrese la cantidad de luces que quiera en la calle N: %d: ", i);		            //esto es por si se ingresa un numero mayor a 15 o menor a 1, que le ingrese de nuevo
            scanf("%d", &maxcalle[i]);
            acumwhile = acumwhile + maxcalle[i];
        }
    }
    acum = acum - acumwhile;
    totalluces = 5 * 15;																		            //total de luces
    No_Encendidas = totalluces - acum;      													            //total de luces apagadas
    printf("\nIngrese la calle que quiera verificar (del 1 al 5): ");							            //se verifica la calle ingresada
    scanf("%d", &calle);            
    while(calle < 1 || calle > 5){
        printf("\n---------------\nERROR");
        printf("\nIngrese la calle que quiera verificar (del 1 al 5): ");                                   //esto es por si se ingresa un numero mayor a 5 o menor a 1, que le ingrese de nuevo
        scanf("%d", &calle);
        }
        printf("\n\nla calle numero %d tiene un numero de %d luces\n\n",calle - 1,maxcalle[calle - 1]);     //ingresa la calle seleccionada
        printf("\nIngrese el numero de luz que quiera encender (1 al %d): ", maxcalle[calle - 1]);          //se pide la cantidad de luces que quiera encender en base al maximo indicado anteriormente
        scanf("%d", &luz);
        
        if( maxcalle[calle - 1] == luz || maxcalle[calle - 1] == 0){
        printf("\n\nSe van a encender las luces maximas de esta cuadra");                                   //indica todas las luces que se van a encecender
        }
    while(luz > maxcalle[i - 1]){
        printf("\n---------------\nERROR");
        printf("\nIngrese el numero de luz que quiera encender (1 al %d): ", maxcalle[calle - 1]);          //esto es por si se ingresa un numero mayor a 15 o menor a 1, que le ingrese de nuevo
        scanf("%d", &luz);
    }
    printf("\n\n\nla cantidad de lucen encendidas es de: %d ", acum);
    printf("\n\nla cantidad de luces apagadas es de: %d ", No_Encendidas);                                  //ingresa cantidad de luces encendidas y apagadas
	printf("\n---------------------------\n");  
    
	printf("\n\n----iluminado/no iluminado----\n\n");                                                       //aca va a indicar si en la calle esta bien distribuida la luz o no
        if(luz == 0){                                                                                       //ingresando iluminado y en su caso contrario, no iluminado
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
#include<stdio.h>
int collaz;
int main(){
    printf("Ingrese un numero: ");          // se ingresa un numero y se escanea
    scanf("%d", &collaz);
	do{
        if(collaz %2 == 0){                 // se lee si el resto es 0, entonces es par y se lo divide por dos
            collaz = collaz / 2;}           
        else if(collaz %2 != 0){            //sino, es impar y se lo multiplica por 3 sumandole 1 al resultado
            collaz = (collaz * 3) + 1; }
    printf("%d \n", collaz);                //se van ingresando los resultados hasta llegar a 1, resultado final
    }while(collaz != 1);
}
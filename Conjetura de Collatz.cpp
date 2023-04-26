#include<stdio.h>
int collaz;
int main(){
    printf("Ingrese un numero: ");
    scanf("%d", &collaz);
	do{
        if(collaz %2 == 0){
            collaz = collaz / 2;}
        else if(collaz %2 != 0){
            collaz = (collaz * 3) + 1; }
    printf("%d \n", collaz);
    }while(collaz != 1);
}
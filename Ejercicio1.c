//Ejercicio 1: Escribir una función que sume dos números. Implemente un programa que la utilice.

#include<stdio.h>

float suma(float m, float n){          				 /*Declaro mi funcion*/ 
	float resultado;                  				 /*Cuerpo de mi funcion: primer paso declaramos una variable que guarde el resultado*/ 
	
	resultado = m + n;                				 /* Resultado guardara la suma de m + n */
	return resultado;	              				 /*Retornamos el valor de resultado*/
}                                    				 /* Cierre de la funcion*/
   int main (){
   	
   float a, b, adicion;
       
	printf("Digite dos numeros: ");   				 /*Imprimimos el valor de la suma*/
	
	scanf("%f",&a); scanf("%f", &b);  				 /* Guardo las variables*/
	
	adicion = suma(a, b);                            /* Llamada de la funcion */
	
	printf("\nLa suma es: %.1f", adicion); 	         /* Mostramos en pantalla la suma*/
	 
return 0;

}

//Ejercicio 2: Escribir un programa que reciba como argumento un conjunto de números. Calcular la media mediante una función.

#include<stdio.h>

int suma(int a, int b, int c, int d, int e, int f, int g){
	int resul_suma, media;
	
	resul_suma = a + b + c + d + e + f + g;
	media = resul_suma / 7;
    return media; 
}

  int main (){
  	
  	int a, b, c, d, e, f, g, llamada;
  	
  	printf("Digite 7 ternimnos:"); scanf("%i", &a); scanf("%i", &b); scanf("%i", &c); scanf("%i", &d); scanf("%i", &e); scanf("%i", &f); scanf("%i", &g);
  	
	  llamada= suma(a, b, c, d, e, f, g);
	  
   printf("\nLa media es: %i", llamada);
   
  return 0;
  
}
  

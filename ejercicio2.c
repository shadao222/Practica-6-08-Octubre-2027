/*Buendia Juarez Noel Shadao
practica 6.2
  ejercicio tipos de variable, entradas y salidas*/
#include <stdio.h>

void main(){
  int entnum;
  char carac = 65; //convierte el numero en caracter ASCII.//
  char carc2 = 'a'; //entre comillas simple captura el caracter//
  double punto;

//asignar valores de teclado a una variable//
printf("escriba un valor entero: ");
scanf("%i", &entnum);
printf("escriba un valor real: ");
scanf("%lf", &punto);

//imprimir valores de formato//
  printf("\n imprimiendo las variables \a\a");
    printf("\t valor de numero entero es: %i \n", entnum);
  printf("\t valor del caracter ASCII es: %c \n", carac);
  printf("\t valor del caracter es: %c \n", carac2);
  printf("\t valor del numero real es: ½lf \ln@, punto);
  
}

  

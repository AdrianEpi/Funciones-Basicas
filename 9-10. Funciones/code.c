/*=========================================================================
===========================================================================
    =            Nombre Archivo:    main.cpp                          =
    =            Autor:         Adrián Epifanio R.H                   =
    =            Fecha:         2017                                  =
    =            Asignatura:    Informática Basica                    =
    =            Lenguaje:      C                                     = 
===========================================================================          
=========================================================================*/
/**

    Descripcion:
        - Ejercicio 1: Realizar un programa para calcular el área de un cilindro dado por
la siguiente fórmula: área = 2 * pi * radio * altura
Se hará uso de una función que reciba como parámetros el radio y la altura y
devuelva el área del cilindro.
		
		- Ejercicio 2: Escribir un programa para calcular la suma de los elementos de un
vector. Se deberá implementar una función que reciba un array de N valores
enteros y devuelva la suma de todos los valores.
		
		- Ejercicio 3: Escribir un programa para calcular el máximo de 3 valores enteros
y lo muestre en pantalla. Se deberá implementar una función que reciba tres
valores enteros y devuelva el valor máximo

*/

/* Compile: g++ -o name main.cpp */


/*----------  Libraries set  ----------*/
#include <stdio.h>


/*====================================
=      Declaracion de funciones      =
====================================*/
float acilindro (float radio, float altura);
int sumavector (int vector[], int m);
int maximo (int numero[3]);

/*=================================*/
/*=====  End of Declaracion  ======*/
/**
 *
 *
 *   Autor: Adrián Epifanio R.H
 *   Fecha: 2017
 *
 *
**/
/*====================================
=            MAIN PROGRAM            =
====================================*/
int main (void) 
{
	int k;
	int i;
	float area;
	float radio;
	float altura;
	float pi;
	int suma;
	int m;
	int vector[m];
	int numero[3];
	int max;
	do 
	{
		printf ("Elija una se las siguientes opciones:\n 0. Salir \n 1. Calcular área de cilindro. \n 2. Suma de elementos de un vector. \n 3. Calcular máximo de 3 valores enteros.");
		scanf ("%d", &k);
		if (k==1)
		{
			printf("Escriba el radio del cilindro\n");
			scanf ("%f", &radio);
			printf("Escribe la altura del cilindro\n");
			scanf ("%f", &altura);
			printf("El área del cilindro es:\n%f", acilindro(radio, altura));
		}
		else if (k==2)
		{
			printf("Escriba el tamañano del vector\n");
			scanf ("%d", &m);
			for (i=0; i<m; i++)
			{
				printf ("Escibe el numero %d del vector\n", i+1);
				scanf ("%d", &vector[i]);
			}
			printf("La suma de los elementos del vector es:\n%d", sumavector(vector, m));
		}
		else if (k==3)
		{
			for (i=0; i<3; i++)
			{
				printf("Escribe el numero %d de los valores enteros:\n", i+1);
				scanf ("%d", &numero[i]);
			}
			printf("El maximo de los valores enteros es:\n%d", maximo(numero));
		}
		printf("\n");
	} while (k!=0);

}

/*==========================*/
/*=====  End of Main  ======*/
/**
 *
 *
 *   Autor: Adrián Epifanio R.H
 *   Fecha: 2017
 *
 *
**/
/*====================================
=    Implementacion de funciones     =
====================================*/

/*----------  Funcion area cilindro  ----------*/
float acilindro (float radio, float altura){
	return (2 * 3.14159265359 * radio * altura);
}
/**
 *
 *
 *   Autor: Adrián Epifanio R.H
 *   Fecha: 2017
 *
 *
**/
/*----------  Funcion suma vectores  ----------*/
int sumavector (int vector[], int m){
	int i;
	int suma;
	for (i=0; i<m; i++){
		if (i==0){
			suma = vector[i];
		}
		else {
			suma = suma + vector[i];
		}
	}
	return suma;
}
/**
 *
 *
 *   Autor: Adrián Epifanio R.H
 *   Fecha: 2017
 *
 *
**/
/*----------  Funcion calculo maximo  ----------*/

int maximo (int numero[3]){
	int i;
	int max;
	for (i=0; i<3; i++){
		if (i==0){
			max = numero[i];
		}
		else {
			if (max < numero[i]){
				max = numero[i];
			}
			else{
				max = max;
			}
		}
	}
	return max;
}

/*====================================*/
/*=====  End of Implementacion  ======*/
/**
 *
 *
 *   Autor: Adrián Epifanio R.H
 *   Fecha: 2017
 *
 *
**/


/*=========================================================================
===========================================================================
    =            Nombre Archivo:    main.cpp                          =
    =            Autor:         Adrián Epifanio R.H                   =
    =            Fecha:         2018                                  =
    =            Asignatura:    Informática Básica                    =
    =            Lenguaje:      C                                     = 
===========================================================================          
=========================================================================*/
/**

    Descripcion:
        - Ejercicio 1: Implementar un programa que solicite dos números por teclado y muestre por pantalla el resultado de sumar y el de restar dichos números.
		- Ejercicio 2: Escribir un programa que solicite el radio de una circunferencia y muestre en pantalla la longitud de la circunferencia y el área del círculo para ese radio.
		- Ejercicio 3: Implementar un programa que muestre por pantalla la suma total de los enteros de 1 al 10 (ambos incluidos).
 		- Ejercicio 4: Implementar un programa que solicite el lado de un cuadrado y muestre su perímetro y su área.

 */

/* Compile: g++ -o name main.cpp */




/*----------  Libraries set  ----------*/
#include <stdio.h>


/*====================================
=            PROGRAM 1               =
====================================*/
int main (void) 
{
	int num1, num2, num3;
	printf ("Escribe el primer numero");
	scanf ("%d", &num1);
	printf ("Escribe el segundo numero");
	scanf ("%d", &num2);
	num3 = num1 + num2;
	num1 = num1 - num2;
	printf ("\n La suma de los dos numeros es %d", num3);
	printf ("\n\n La resta de los dos numeros es %d", num1);
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
=            PROGRAM 2               =
====================================*/
int main (void) 
{
	int num1, num2, num3;
	printf ("Escribe el primer numero");
	scanf ("%d", &num1);
	printf ("Escribe el segundo numero");
	scanf ("%d", &num2);
	num3 = num1 + num2;
	num1 = num1 - num2;
	printf ("\n La suma de los dos numeros es %d", num3);
	printf ("\n\n La resta de los dos numeros es %d", num1);
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
=            PROGRAM 3               =
====================================*/
int main (void) 
{
	int num;
	num = 1+2+3+4+5+6+7+8+9+10;
	printf ("La suma de los enteros del 1 al 10 (ambos incluidos) es: %d", num);
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
=            PROGRAM 4               =
====================================*/
int main (void) 
{
	float lado, perimetro, area;
	printf ("Escribe el lado del cuadrado");
	scanf ("%f", &lado);
	perimetro = lado * 4;
	area = lado * lado;
	printf ("\n El perímetro del cuadrado es: %f", perimetro);
	printf ("\n\n El area del cuadrado es: %f", area);
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

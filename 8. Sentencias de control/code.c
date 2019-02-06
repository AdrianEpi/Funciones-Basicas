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
        Ejercicio 1: Escribir un programa que pida al usuario dos matrices de tamaño
3x3. A continuación debe mostrarlas en pantalla y calcular:
a) La suma de ambas matrices y mostrarla
b) La suma de cada una de las filas de la primera matriz y mostrarlas
c) El valor mínimo de la diagonal de la segunda matriz y mostrarlo

*/


/*----------  Libraries set  ----------*/
#include <stdio.h>


/*====================================
=            MAIN PROGRAM            =
====================================*/
int main (void)
{
	int matriz1[3][3], matriz2[3][3] , matriz3[3][3];
	int fila[3], columna[3];
	int x, y, k, diagonal;
	k = 1;
	for ( x=0; x<3 ; x++ )
	{
		for (y=0; y<3 ; y++ )
		{
			printf("Escriba el numero %d\t", k);
			printf("de la primera matriz:\n");
			scanf ("%d", &matriz1[x][y]);
			k++;
		}
	}
	printf ("La primera matriz es:\n");
	for ( x=0; x<3 ; x++)
	{
		for (y=0; y<3 ; y++ )
			printf("%d\t", matriz1[x][y]);

		printf("\n");
	}
	k = 1;
	for ( x=0; x<3 ; x++)
	{
		for (y=0; y<3 ; y++ )
		{
			printf("Escriba el numero %d\t", k);
			printf("de la segunda matriz:\n");
			scanf ("%d", &matriz2[x][y]);
			k++;
		}
	}
	printf ("La segunda matriz es:\n");
	for ( x=0; x<3 ; x++ )
	{
		for (y=0; y<3 ; y++ )
			printf("%d\t", matriz2[x][y]);

		printf("\n");
	}
	for ( x=0; x<3 ; x++ )
	{
		for (y=0; y<3 ; y++ )
			matriz3[x][y] = matriz1[x][y] + matriz2[x][y];
	}
	printf ("La suma de las matrices es:\n");
	for ( x=0; x<3 ; x++ )
	{
		for (y=0; y<3 ; y++ )
			printf("%d\t", matriz3[x][y]);

		printf("\n");
	}
	printf ("La suma por filas es:\n");
	for ( x=0; x<3; x++)
	{
		for (y=0; y<3; y++)
		{
			if (y==0)
				fila[x] = matriz1[x][y];
			
			else
				fila[x] = matriz1[x][y] + fila[y];
			
			printf ("%d\n", fila[x]);
		}
	}
	for (x=0; x<3;)
	{
		if (x==0)
			diagonal = matriz2[x][x];
		
		if (matriz2[x][x]<=diagonal)
		{
			diagonal = matriz2[x][x];
			x++;
		}
		else 
			x++;
		
	}
	printf ("El minimo de la diagonal es:%d\n", diagonal);
	printf ("La matriz resultante de la suma por columnas es:\n");
	for ( y=0; y<3; y++)
	{
		for (x=0; x<3; x++)
		{
			if (x==0)
				columna[y] = matriz1[x][y];
			
			else
				columna[y] = matriz1[x][y] + columna[y];
			
		}
		printf("%d\t", columna[y]);
	}
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

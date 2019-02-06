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
        - Almacenar una matriz de orden nxm introducida desde teclado. (n y m se
pedirán por teclado). El usuario debe introducir dos matrices, llamando dos
veces a misma función.
		
		- Imprimir en pantalla una matriz. Se llamará dos veces a la función para
mostrar ambas matrices.

		- Calcular la suma de ambas matrices (tienen que coincidir sus nº de filas y
sus nº de columnas)

		- Calcular la media de los elementos de la diagonal secundaria para la matriz
que elija el usuario. La función recibirá como parámetro, al menos, la matriz
correspondiente. Antes de realizar el cálculo se tendrá que comprobar si la
matriz es cuadrada.

*/

/* Compile: g++ -o name main.cpp */


/*----------  Libraries set  ----------*/
#include <stdio.h>

#define X 100
#define Y 100

/*====================================
=      Declaracion de funciones      =
====================================*/
void darvalor(int matriz[X][Y], int f, int c);
void imprimirmatriz(int matriz1[x][y], int matriz2[x][y], int x, int y, int l);
void sumamatrices(int matriz1[x][y], int matriz2[x][y], int matriz3[x][y], int x, int y, int r, int t);
void diagonalsecundaria(int matriz1[x][y], int matriz2[x][y], int x, int y, int l);
void paridad(int matriz1[x][y], int matriz2[r][t], int x, int y, int r, int t);

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
  	int n1, n2, m1, m2, l, x, y, r, t;
	int k, k2, matriz1[X][Y], matriz2[X][Y], matriz3[X][Y];
	do 
	{
		printf ("Elija una se las siguientes opciones:\n 0. Salir \n 1. Introducir datos de la primera matriz. \n 2. Introducir datos de la segunda matriz. \n 3. Imprimir en pantalla la primera matriz. \n 4. Imprimir en pantalla la seguna matriz. \n 5. Calcular la suma de ambas matrices. \n 6. Calcular la media de los elementos de la diagonal segundaria. \n 7. Calcular que matriz tiene mas numeros pares.");
		scanf ("%d", &k);
		if (k==1)
		{
			printf("Introduce el numero de filas de la matriz\n");
			scanf ("%d", &n1);
			printf ("Introduce el numero de columnas de la matriz\n");
			scanf ("%d", &m1);
			darvalor(matriz1, n1, m1);
		}
		else if (k==2)
		{
			printf("Introduce el numero de filas de la matriz\n");
			scanf ("%d", &n2);
			printf ("Introduce el numero de columnas de la matriz\n");
			scanf ("%d", &m2);			
			darvalor(matriz2, n2, m2);		
		}
		else if (k==3)
		{
			l=0;
			x=n1;
			y=m1;
			imprimirmatriz(matriz1, matriz2, x, y, l);
		}
		else if (k==4)
		{
			l=1;
			x=n2;
			y=m2;
			imprimirmatriz(matriz1, matriz2, x, y, l);
		}
		else if (k==5)
		{
			x=n1;
			y=m1;
			r=n2;
			t=m2;
			sumamatrices(matriz1, matriz2, matriz3, x, y, r, t);
		}
		else if (k==6)
		{
			do 
			{
				printf("Elija un a matriz para calcular la diagonal secundaria.\n 0. Salir\n 1. Primera matriz.\n 2. Segunda matriz.");
				scanf ("%d", &k2);
				if (k2==1)
				{
					l=0;
					x=n1;
					y=m1;
					diagonalsecundaria(matriz1, matriz2, x, y, l);
				}
				else if (k2==2)
				{
					l=1;
					x=n2;
					y=m2;
					diagonalsecundaria(matriz1, matriz2, x, y, l);
				}				
			} while (k2!=0);
		}
		else if (k==7)
		{
			x=n1;
			y=m1;
			r=n2;
			t=m2;
			paridad(matriz1, matriz2, x, y, r, t);
		}
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
/*=================================
=            Funciones            =
=================================*/
/*----------  Funcion dar valor  ----------*/

void darvalor(int matriz[X][Y], int f, int c){
	int i, j;
	for (i=0; i<f; i++){
		for (j=0; j<c; j++){
			printf("Escriba el numero %d de la columna %d\n", j+1, i+1);
			scanf ("%d", &matriz1[i][j]);
		}
	}
}
/**
 *
 *
 *   Autor: Adrián Epifanio R.H
 *   Fecha: 2017
 *
 *
**/
/*----------  Funcion imprimir matriz  ----------*/

void imprimirmatriz(int matriz1[x][y], int matriz2[x][y], int x, int y, int l){
	int i, j;
	if (l==0){
		for (i=0; i<n1; i++){
			for (j=0; j<m1; j++){
				printf("%d\t", matriz1[i][j]);
			}
			printf("\n");
		}
	}
	else if (l==1){
		for (i=0; i<n2; i++){
			for (j=0; j<m2; j++){
				printf("%d\t", matriz2[i][j]);
			}
			printf("\n");
		}
	}
	else{
		printf ("Error al imprimir matriz");
	}
}
/**
 *
 *
 *   Autor: Adrián Epifanio R.H
 *   Fecha: 2017
 *
 *
**/
/*----------  Funcion sumar matrices  ----------*/

void sumamatrices(int matriz1[x][y], int matriz2[x][y], int matriz3[x][y], int x, int y, int r, int t){
	int i, j;
	if (n1==n2 && m2==m1){
		for (i=0; i<x; i++){
			for (j=0; j<y; j++){
				matriz3[i][j] = matriz1[i][j] + matriz2[i][j];		
			}
		}
		printf("La suma de las matrices es;\n");
		for (i=0; i<x; i++){
			for (j=0; j<y; j++){
				printf("%d\t", matriz3[i][j]);			
			}
		printf("\n");
		}
	}
	else {
		printf("Error, las matrices no son compatibles para la suma.\n");
	}
}
/**
 *
 *
 *   Autor: Adrián Epifanio R.H
 *   Fecha: 2017
 *
 *
**/
/*----------  Funcion diagonal secundaria  ----------*/

void diagonalsecundaria(int matriz1[x][y], int matriz2[x][y], int x, int y, int l){
	printf ("Entra en la funcion");	
	int media;
	media = 0;
	if (x==n1){
		if (x==y){
			x=y;
			y=0;
			do {
				media = media + matriz1[x][y];
				x-1;
				y+1;
			} while (x!=y);
			media = media / n1;
			printf ("La media de la segunda diagonal de la matriz escogida es:\n %d", media);
		}
	}
	else if (x==n2){
		if (x==y){
			x=y;
			y=0;
			do {
				media = media + matriz2[x][y];
				x-1;
				y+1;
			} while (x!=y);
			media = media / n2;
			printf ("La media de la segunda diagonal de la matriz escogida es:\n %d", media);
		}
	}
	else {
		printf("Error, la matriz no es cuadrada, imposible calcular diagonal secundaria. \n");
	}
}
/**
 *
 *
 *   Autor: Adrián Epifanio R.H
 *   Fecha: 2017
 *
 *
**/
/*----------  Funcion paridad  ----------*/

void paridad(int matriz1[x][y], int matriz2[r][t], int x, int y, int r, int t){
	int i, j, par1, par2;
	for (i=0; i<x; i++){
		for (j=0; j<y; j++){
			if (matriz1[i][j]%2==0){
				par1++;
			}
		}	
	}
	for (i=0; i<r; i++){
		for (j=0; j<t; j++){
			if (matriz1[i][j]%2==0){
				par2++;
			}
		}	
	}
	if (par1>=par2){
		printf ("\nLa primera matriz tiene mas números pares con %d números pares.", par1);
	}
	else if (par2>=par1){
		printf ("\nLa segunda matriz tiene mas números pares con %d números pares.", par2);
	}
	else {
		printf("\n Las dos matrices tienen %d números pares.", par1);
	}
}
/*===============================*/
/*=====  End of Funciones  ======*/
/**
 *
 *
 *   Autor: Adrián Epifanio R.H
 *   Fecha: 2017
 *
 *
**/

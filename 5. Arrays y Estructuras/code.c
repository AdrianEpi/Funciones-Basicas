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
        - Ejercicio 1: Escribir un programa que pida, para tres personas: el nombre, primer apellido y su edad. A continuación, debe mostrar los datos de las personas introducidas y la edad media de dichas personas.
		- Ejercicio 2: Suponiendo que cada cliente de una sucursal bancaria tuviera 2 cuentas bancarias cuyos datos asociados a cada cuenta fueran: número de cuenta, ingreso y extracción. Escribir un programa es C que pida por pantalla para 2 clientes: su nombre y datos de sus dos cuentas. A continuación, escribirá para cada cliente, su nombre, el importe total ingresado, la cantidad total extraída y su saldo total. 

 */

/* Compile: g++ -o name main.cpp */


/*----------  Libraries set  ----------*/
#include <stdio.h>
#define MAXIMO 50

/*====================================
=             PROGRAM 1              =
====================================*/
typedef struct pers{
	char nombre[50];
	char apellido[50];
	int edad[3];
}Tpers;
	Tpers persona[3];
	int media;

int main (void)
{
	printf("Escribe los tres nombres de las personas:\n");
	scanf ("%s", &persona[0].nombre);
	scanf ("%s", &persona[1].nombre);
	scanf ("%s", &persona[2].nombre);
	printf("Escribe los apellidos de las personas:\n");
	scanf ("%s", &persona[0].apellido);
	scanf ("%s", &persona[1].apellido);
	scanf ("%s", &persona[2].apellido);
	printf("Escribe las edades de las personas:\n");
	scanf ("%d", &persona[0].edad);
	scanf ("%d", &persona[1].edad);
	scanf ("%d", &persona[2].edad);
	media =(persona[0].edad + persona[1].edad + persona[2].edad)/3;
	printf("\nLos datos de la primera persona son:\n Nombre:\t", persona[0].nombre);
	printf("\nApellido:\t", persona[0].apellido);
	printf("\nEdad:\t", persona[0].edad);
	printf("\nLos datos de la segunda persona son:\n Nombre:\t", persona[1].nombre);
	printf("\nApellido:\t", persona[1].apellido);
	printf("\nEdad:\t", persona[1].edad);
	printf("\nLos datos de la tercera persona son:\n Nombre:\t", persona[2].nombre);
	printf("\nApellido:\t", persona[2].apellido);
	printf("\nEdad:\t", persona[2].edad);
	printf("\nLa media de las edades de las tres personas es:\t", media );
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
=             PROGRAM 2              =
====================================*/
typedef struct{
	int numero_cuenta;
	float ingreso;
	float extraccion;
	float saldo;
}Tcuenta;

typedef struct{
	char nombre[MAXIMO];
	Tcuenta cuenta[2];
	float ingreso_total;
	float extraccion_total;
	float saldo_total;
}Tcliente;
	Tcliente cliente [2];

int main (void) {
	printf("Introduce los datos de la primera cuenta del primer cliente\n");
	printf("Nombre:\n");
	scanf ("%s", &cliente[0].nombre);
	printf("Numero de la primera cuenta\n");
	scanf ("%d", &cliente[0].cuenta[0].numero_cuenta);
	printf("Ingresos:\n");
	scanf ("%f", &cliente[0].cuenta[0].ingreso);
	printf("Extracciones:\n");
	scanf ("%f", &cliente[0].cuenta[0].extraccion);
	cliente[0].cuenta[0].saldo = cliente[0].cuenta[0].ingreso - cliente[0].cuenta[0].extraccion;
	printf("Introduce los datos de la segunda cuenta del primer cliente\n");
	printf("Nombre:\n");
	scanf ("%s", &cliente[0].nombre);
	printf("Numero de la primera cuenta\n");
	scanf ("%d", &cliente[0].cuenta[1].numero_cuenta);
	printf("Ingresos:\n");
	scanf ("%f", &cliente[0].cuenta[1].ingreso);
	printf("Extracciones:\n");
	scanf ("%f", &cliente[0].cuenta[1].extraccion);
	cliente[0].cuenta[1].saldo = cliente[0].cuenta[1].ingreso - cliente[0].cuenta[1].extraccion;
	printf("Introduce los datos de la primera cuenta del segundo cliente\n");
	printf("%sNombre:\n");
	scanf ("%s", &cliente[1].nombre);
	printf("Numero de la primera cuenta\n");
	scanf ("%d", &cliente[1].cuenta[0].numero_cuenta);
	printf("Ingresos:\n");
	scanf ("%f", &cliente[1].cuenta[0].ingreso);
	printf("Extracciones:\n");
	scanf ("%f", &cliente[1].cuenta[0].extraccion);
	cliente[1].cuenta[0].saldo = cliente[1].cuenta[0].ingreso - cliente[1].cuenta[0].extraccion;
	printf("Introduce los datos de la segunda cuenta del segundo cliente\n");
	printf("Nombre:\n");
	scanf ("%s", &cliente[1].nombre);
	printf("Numero de la primera cuenta\n");
	scanf ("%d", &cliente[1].cuenta[1].numero_cuenta);
	printf("Ingresos:\n");
	scanf ("%f", &cliente[1].cuenta[1].ingreso);
	printf("Extracciones:\n");
	scanf ("%f", &cliente[1].cuenta[1].extraccion);
	cliente[1].cuenta[1].saldo = cliente[1].cuenta[1].ingreso - cliente[1].cuenta[1].extraccion;
	cliente[1].cuenta[0].saldo = cliente[1].cuenta[0].ingreso - cliente[1].cuenta[0].extraccion;
	cliente[0].cuenta[1].saldo = cliente[0].cuenta[1].ingreso - cliente[0].cuenta[1].extraccion;
	cliente[0].cuenta[0].saldo = cliente[0].cuenta[0].ingreso - cliente[0].cuenta[0].extraccion;
	cliente[0].ingreso_total = cliente[0].cuenta[0].ingreso + cliente[0].cuenta[1].ingreso;
	cliente[0].extraccion_total = cliente[0].cuenta[0].extraccion + cliente[0].cuenta[1].extraccion;
	cliente[0].saldo_total = cliente[0].cuenta[0].saldo + cliente[0].cuenta[1].saldo;
	cliente[1].ingreso_total = cliente[0].cuenta[0].ingreso + cliente[0].cuenta[1].ingreso;
	cliente[1].extraccion_total = cliente[0].cuenta[0].extraccion + cliente[0].cuenta[1].extraccion;
	cliente[1].saldo_total = cliente[0].cuenta[0].saldo + cliente[0].cuenta[1].saldo;
	printf("\nLos datos de la primera cuenta del primer cliente son:\n Nombre:\n", cliente[0].nombre);
	printf("\nIngresos:\n", cliente[0].cuenta[0].ingreso);
	printf("\nExtracciones:\n", cliente[0].cuenta[0].extraccion);
	printf("\nSaldo:\n", cliente[0].cuenta[0].saldo);
	printf("\nLos datos de la segunda cuenta del primer cliente son:\n Nombre:\n", cliente[0].nombre);
	printf("\nIngresos:\n", cliente[0].cuenta[1].ingreso);
	printf("\nExtracciones:\n", cliente[0].cuenta[1].extraccion);
	printf("\nSaldo:\n", cliente[0].cuenta[1].saldo);
	printf("\nLos datos de la primera cuenta del segundo cliente son:\n Nombre:\n", cliente[1].nombre);
	printf("\nIngresos:\n", cliente[1].cuenta[0].ingreso);
	printf("\nExtracciones:\n", cliente[1].cuenta[0].extraccion);
	printf("\nSaldo:\n", cliente[1].cuenta[0].saldo);
	printf("\nLos datos de la segunda cuenta del segundo cliente son:\n Nombre:\n", cliente[1].nombre);
	printf("\nIngresos:\n", cliente[1].cuenta[1].ingreso);
	printf("\nExtracciones:\n", cliente[1].cuenta[1].extraccion);
	printf("\nSaldo:\n", cliente[1].cuenta[1].saldo);
	printf ("Los datos generales del primer cliente son:\n");
	printf("\nIngreso total:\n", cliente[0].ingreso_total);
	printf("\nExtraccion total:\n", cliente[0].extraccion_total);
	printf("\nSaldo total:\n", cliente[0].saldo_total);
	printf ("Los datos generales del segundo cliente son:\n");
	printf("\nIngreso total:\n", cliente[1].ingreso_total);
	printf("\nExtraccion total:\n", cliente[1].extraccion_total);
	printf("\nSaldo total:\n", cliente[1].saldo_total);
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

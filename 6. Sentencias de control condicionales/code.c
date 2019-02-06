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
        - Ejercicio 1: Escribir un programa que pida, para cinco personas: el nombre, primer apellido y su edad. A continuación, debe mostrar los datos de las personas que sean mayores de edad.
		- Ejercicio 2: Suponiendo que cada cliente de una sucursal bancaria tuviera 2 cuentas bancarias cuyos datos asociados a cada cuenta fueran: número de cuenta, ingreso y extracción. Escribir un programa es C que pida por pantalla para 3 clientes: su nombre y datos de sus dos cuentas. A continuación, escribirá para cada cliente, su nombre, el importe total ingresado, la cantidad total extraída y su saldo total para aquellos clientes con saldo total positivo. Para los clientes con saldo total negativo escribirá un mensaje indicando: “Cliente sin permiso para extraer dinero”.

 */

/* Compile: g++ -o name main.cpp */



/*----------  Libraries set  ----------*/
#include <stdio.h>


/*====================================
=             PROGRAM 1              =
====================================*/
typedef struct pers {
	char nombre[50];
	char apellido[50];
	int edad;
}Tpers;
	Tpers persona[5];
		
int main (void)
{
	int media;
	printf("Escribe los cinco nombres de las personas:\n");
	scanf ("%s", persona[0].nombre);
	scanf ("%s", persona[1].nombre);
	scanf ("%s", persona[2].nombre);
	scanf ("%s", persona[3].nombre);
	scanf ("%s", persona[4].nombre);
	printf("Escribe los apellidos de las personas:\n");
	scanf ("%s", persona[0].apellido);
	scanf ("%s", persona[1].apellido);
	scanf ("%s", persona[2].apellido);
	scanf ("%s", persona[3].apellido);
	scanf ("%s", persona[4].apellido);
	printf("Escribe las edades de las personas:\n");
	scanf ("%d", &persona[0].edad);
	scanf ("%d", &persona[1].edad);
	scanf ("%d", &persona[2].edad);
	scanf ("%d", &persona[3].edad);
	scanf ("%d", &persona[4].edad);
	if (persona[0].edad > 17)
	{
		printf("\nLos datos de la primera persona son:\n Nombre:%s\t", persona[0].nombre);
		printf("\nApellido:%s\t", persona[0].apellido);
		printf("\nEdad:%d\t", persona[0].edad);
	}
	if (persona[1].edad > 17)
	{
		printf("\nLos datos de la segunda persona son:\n Nombre:%s\t", persona[1].nombre);
		printf("\nApellido:%s\t", persona[1].apellido);
		printf("\nEdad:%d\t", persona[1].edad);
	}
	if (persona[2].edad > 17)
	{
		printf("\nLos datos de la tercera persona son:\n Nombre:%s\t", persona[2].nombre);
		printf("\nApellido:%s\t", persona[2].apellido);
		printf("\nEdad:%d\t", persona[2].edad);
	}	
	if (persona[3].edad > 17)
	{
		printf("\nLos datos de la cuarta persona son:\n Nombre:%s\t", persona[3].nombre);
		printf("\nApellido:%s\t", persona[3].apellido);
		printf("\nEdad:%d\t", persona[3].edad);
	}
	if (persona[4].edad > 17)
	{
		printf("\nLos datos de la quinta persona son:\n Nombre:%s\t", persona[4].nombre);
		printf("\nApellido:%s\t", persona[4].apellido);
		printf("\nEdad:%d\t", persona[4].edad);
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
	char nombre[50];
	Tcuenta cuenta[2];
	float ingreso_total;
	float extraccion_total;
	float saldo_total;
}Tcliente;

	Tcliente cliente[3];
int main (void) 
{
	printf("Introduce los datos de la primera cuenta del primer cliente\n");
	printf("Nombre:\n");
	scanf ("%s", cliente[0].nombre);
	printf("Numero de la primera cuenta\n");
	scanf ("%d", &cliente[0].cuenta[0].numero_cuenta);
	printf("Ingresos:\n");
	scanf ("%f", &cliente[0].cuenta[0].ingreso);
	printf("Extracciones:\n");
	scanf ("%f", &cliente[0].cuenta[0].extraccion);
	cliente[0].cuenta[0].saldo = cliente[0].cuenta[0].ingreso - cliente[0].cuenta[0].extraccion;
	printf("Introduce los datos de la segunda cuenta del primer cliente\n");
	printf("Numero de la segunda cuenta\n");
	scanf ("%d", &cliente[0].cuenta[1].numero_cuenta);
	printf("Ingresos:\n");
	scanf ("%f", &cliente[0].cuenta[1].ingreso);
	printf("Extracciones:\n");
	scanf ("%f", &cliente[0].cuenta[1].extraccion);
	cliente[0].cuenta[1].saldo = cliente[0].cuenta[1].ingreso - cliente[0].cuenta[1].extraccion;
	/********************************************************************
	printf("Introduce los datos de la primera cuenta del segundo cliente\n");
	printf("Nombre:\n");
	scanf ("%s", cliente[1].nombre);
	printf("Numero de la primera cuenta\n");
	scanf ("%d", &cliente[1].cuenta[0].numero_cuenta);
	printf("Ingresos:\n");
	scanf ("%f", &cliente[1].cuenta[0].ingreso);
	printf("Extracciones:\n");
	scanf ("%f", &cliente[1].cuenta[0].extraccion);
	cliente[1].cuenta[0].saldo = cliente[1].cuenta[0].ingreso - cliente[1].cuenta[0].extraccion;
	printf("Introduce los datos de la segunda cuenta del segundo cliente\n");
	printf("Numero de la segunda cuenta\n");
	scanf ("%d", &cliente[1].cuenta[1].numero_cuenta);
	printf("Ingresos:\n");
	scanf ("%f", &cliente[1].cuenta[1].ingreso);
	printf("Extracciones:\n");
	scanf ("%f", &cliente[1].cuenta[1].extraccion);
	printf("Introduce los datos de la primera cuenta del tercer cliente\n");
	printf("Nombre:\n");
	scanf ("%s", cliente[2].nombre);
	printf("Numero de la primera cuenta\n");
	scanf ("%d", &cliente[2].cuenta[0].numero_cuenta);
	printf("Ingresos:\n");
	scanf ("%f", &cliente[2].cuenta[0].ingreso);
	printf("Extracciones:\n");
	scanf ("%f", &cliente[2].cuenta[0].extraccion);
	cliente[2].cuenta[0].saldo = cliente[2].cuenta[0].ingreso - cliente[2].cuenta[0].extraccion;
	printf("Introduce los datos de la segunda cuenta del tercer cliente\n");
	printf("Numero de la segunda cuenta\n");
	scanf ("%d", &cliente[2].cuenta[1].numero_cuenta);
	printf("Ingresos:\n");
	scanf ("%f", &cliente[2].cuenta[1].ingreso);
	printf("Extracciones:\n");
	scanf ("%f", &cliente[2].cuenta[1].extraccion);
	*************************************************/
	/*	cliente[1].cuenta[1].saldo = cliente[1].cuenta[1].ingreso - cliente[1].cuenta[1].extraccion;
	cliente[1].cuenta[0].saldo = cliente[1].cuenta[0].ingreso - cliente[1].cuenta[0].extraccion;*/
	cliente[0].cuenta[1].saldo = cliente[0].cuenta[1].ingreso - cliente[0].cuenta[1].extraccion;
	cliente[0].cuenta[0].saldo = cliente[0].cuenta[0].ingreso - cliente[0].cuenta[0].extraccion;
	/*cliente[2].cuenta[1].saldo = cliente[2].cuenta[1].ingreso - cliente[2].cuenta[1].extraccion;
	  cliente[2].cuenta[0].saldo = cliente[2].cuenta[0].ingreso - cliente[2].cuenta[0].extraccion;*/
	cliente[0].ingreso_total = cliente[0].cuenta[0].ingreso + cliente[0].cuenta[1].ingreso;
	cliente[0].extraccion_total = cliente[0].cuenta[0].extraccion + cliente[0].cuenta[1].extraccion;
	cliente[0].saldo_total = cliente[0].cuenta[0].saldo + cliente[0].cuenta[1].saldo;
	/*cliente[1].ingreso_total = cliente[0].cuenta[0].ingreso + cliente[0].cuenta[1].ingreso;
	cliente[1].extraccion_total = cliente[0].cuenta[0].extraccion + cliente[0].cuenta[1].extraccion;
	cliente[1].saldo_total = cliente[0].cuenta[0].saldo + cliente[0].cuenta[1].saldo;
	cliente[2].ingreso_total = cliente[2].cuenta[0].ingreso + cliente[2].cuenta[1].ingreso;
	cliente[2].extraccion_total = cliente[2].cuenta[0].extraccion + cliente[2].cuenta[1].extraccion;
	cliente[2].saldo_total = cliente[2].cuenta[0].saldo + cliente[2].cuenta[1].saldo;*/
	printf ("Los datos generales del primer cliente son:\n");
	printf("Nombre:%s\n", cliente[0].nombre);
	printf("\nIngreso total:%f\n", cliente[0].ingreso_total);
	printf("\nExtraccion total:%f\n", cliente[0].extraccion_total);
	if (cliente[0].saldo_total > 0) 
	{
	  if (cliente[0].saldo_total < 3000)
	  {
	    printf ("\n Buen cliente");
	    printf("\nSaldo total:%f\n", cliente[0].saldo_total);
	  }
	  else 
	  {
	    printf ("\n Premiar fidelidad del cliente.\n");
	    printf("\nSaldo total:%f\n", cliente[0].saldo_total);
	  }
	}
	else 
		printf("Cliente sin permiso para extraer dinero.\n");
	
	/*printf ("Los datos generales del segundo cliente son:\n");
	printf("Nombre:%s\n", cliente[1].nombre);
	printf("\nIngreso total:%f\n", cliente[1].ingreso_total);
	printf("\nExtraccion total:%f\n", cliente[1].extraccion_total);
	if (cliente[1].saldo_total > 0) 
		printf("\nSaldo total:%f\n", cliente[1].saldo_total);
	
	else 
		printf("Cliente sin permiso para extraer dinero.\n");
	
	printf ("Los datos generales del primer cliente son:\n");
	printf("Nombre:%s\n", cliente[2].nombre);
	printf("\nIngreso total:%f\n", cliente[2].ingreso_total);
	printf("\nExtraccion total:%f\n", cliente[2].extraccion_total);
	if (cliente[2].saldo_total > 0) 
		printf("\nSaldo total:%f\n", cliente[2].saldo_total);
	
	else 
		printf("Cliente sin permiso para extraer dinero.\n");
		*/
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

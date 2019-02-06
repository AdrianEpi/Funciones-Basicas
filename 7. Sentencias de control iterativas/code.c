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
        - Ejercicio 1: Escribir un programa que pida, para cinco personas: el nombre,
primer apellido y su edad. A continuación, debe mostrar los datos de las
personas que sean mayores de edad.
		
		- Ejercicio 2: Suponiendo que cada cliente de una sucursal bancaria tuviera 2
cuentas bancarias cuyos datos asociados a cada cuenta fueran: número de
cuenta, ingreso y extracción. Escribir un programa es C que pida por pantalla
para 3 clientes: su nombre y datos de sus dos cuentas. A continuación,
escribirá para cada cliente, su nombre, el importe total ingresado, la cantidad
total extraída y su saldo total para aquellos clientes con saldo total positivo.
Para los clientes con saldo total negativo escribirá un mensaje indicando:
“Cliente sin permiso para extraer dinero”.

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
	int media, k;	
	k=0;
	do 
	{
		printf ("Escribe el nombre de la persona numero:%d\n", k);
		scanf ("%s", persona[k].nombre);
		printf ("\nEscribe su apellido\n");
		scanf ("%s", persona[k].apellido);
		printf ("\nEscribe su edad\n");
		scanf ("%d", &persona[k].edad);
		k++;
	}while (k<5);
	
	k=0;
	do 
	{
		if (persona[k].edad > 17)
		{
			printf("\nLos datos de la persona son:\n Nombre:%s\t", persona[k].nombre);
			printf("\nApellido:%s\t", persona[k].apellido);
			printf("\nEdad:%d\t", persona[k].edad);
		k++;
		}
	}while (k<5);
		
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
	int k;
	k=0;
	do 
	{
		printf("Introduce los datos de la primera cuenta del cliente numero:%d\t", k);
		printf("\nNombre:\t");
		scanf ("%s", cliente[k].nombre);
		printf("\nNumero de la primera cuenta\n");
		scanf ("%d", &cliente[k].cuenta[0].numero_cuenta);
		printf("\nIngresos:\t");
		scanf ("%f", &cliente[k].cuenta[0].ingreso);
		printf("\nExtracciones:\t");
		scanf ("%f", &cliente[k].cuenta[0].extraccion);
		cliente[k].cuenta[0].saldo = cliente[k].cuenta[0].ingreso - cliente[k].cuenta[0].extraccion;
		printf("\nIntroduce los datos de la segunda cuenta del cliente:%d\t", k);
		printf("\nNombre:\t");
		scanf ("%s", cliente[k].nombre);
		printf("\nNumero de la segunda cuenta\t");
		scanf ("%d", &cliente[k].cuenta[1].numero_cuenta);
		printf("\nIngresos:\t");
		scanf ("%f", &cliente[k].cuenta[1].ingreso);
		printf("\nExtracciones:\t");
		scanf ("%f", &cliente[k].cuenta[1].extraccion);
		cliente[k].cuenta[1].saldo = cliente[k].cuenta[1].ingreso - cliente[k].cuenta[1].extraccion;
		k++;
	}while (k<3);
	k=0;
	do
	{
		cliente[k].cuenta[1].saldo = cliente[k].cuenta[1].ingreso - cliente[k].cuenta[1].extraccion;
		cliente[k].cuenta[0].saldo = cliente[k].cuenta[0].ingreso - cliente[k].cuenta[0].extraccion;
		cliente[k].ingreso_total = cliente[k].cuenta[0].ingreso + cliente[k].cuenta[1].ingreso;
		cliente[k].extraccion_total = cliente[k].cuenta[0].extraccion + cliente[k].cuenta[1].extraccion;
		cliente[k].saldo_total = cliente[k].cuenta[0].saldo + cliente[k].cuenta[1].saldo;
		
		if (cliente[0].saldo_total > 0) 
		{
	  		if (cliente[k].saldo_total < 2999)
	  		{
				printf ("Los datos generales del cliente:%d\t", k);
				printf("\nNombre:%s\n", cliente[k].nombre);
				printf("\nIngreso total:%f\n", cliente[k].ingreso_total);
				printf("\nExtraccion total:%f\n", cliente[k].extraccion_total);
	  			printf ("\n Buen cliente");
	  			printf("\nSaldo total:%f\n", cliente[k].saldo_total);
	 	 	}
	 		else 
	 		{
				printf ("Los datos generales del cliente:%d\t", k);
				printf("\nNombre:%s\n", cliente[k].nombre);
				printf("\nIngreso total:%f\n", cliente[k].ingreso_total);
				printf("\nExtraccion total:%f\n", cliente[k].extraccion_total);
	 			printf ("\n Premiar fidelidad del cliente.\n");
	 			printf("\nSaldo total:%f\n", cliente[k].saldo_total);
			}					
		}
		else 
			printf("Cliente sin permiso para extraer dinero.\n");
		
		k++;
	}while (k<3);
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

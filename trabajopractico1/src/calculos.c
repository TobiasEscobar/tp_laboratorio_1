/*
 * calculos.c
 *
 *  Created on: 10 abr. 2022
 *      Author: Tobias Escobar
 */

#include <stdio.h>
#include <stdlib.h>

float calculoDebito(float precioViaje,float descuentoAplicado)
{
	float resultado;
	float porcentaje;
	porcentaje = precioViaje*descuentoAplicado/100;
	resultado = precioViaje - porcentaje;
	float retorno = resultado;

	return retorno;
}

float calculoCredito(float precioViaje,float interesAplicado)
{
	float resultado;
	float interes;
	interes = precioViaje*interesAplicado/100;
	resultado = precioViaje + interes;
	float retorno = resultado;

	return retorno;
}

float calculoBitcoin(float precioViaje)
{
	float resultado;
	float precioBitcoin = 4606954.55;
	resultado = precioViaje/precioBitcoin;
	float retorno = resultado;

	return retorno;
}

float calculoUnitario(float precioViaje, float kilometros)
{
	float resultado;
	resultado = precioViaje/kilometros;
	float retorno = resultado;

	return retorno;
}

float calculoDiferencia(float precioViaje, float precioViajeDos)
{
	float resultado;
	resultado = precioViaje - precioViajeDos;
	float retorno = resultado;

	return retorno;
}

void mostrarResultadosAerolineas(float precioViaje, float debito, float credito, float bitcoin, float unitario)
{
	printf("\nAerolineas:%.2f\n"
			"a) Precio con tarjeta de debito: $%.2f\n"
			"b) Precio con tarjeta de credito: $%.2f\n"
			"c) Precio pagando con bitcoin: $%.2f\n"
			"d) Precio unitario: $%.2f\n", precioViaje, debito, credito, bitcoin, unitario);
}

void mostrarResultadosLatam(float precioViaje, float debito, float credito, float bitcoin, float unitario, float diferencia)
{
	printf("\nLatam:%.2f\n"
			"a) Precio con tarjeta de debito: $%.2f\n"
			"b) Precio con tarjeta de credito: $%.2f\n"
			"c) Precio pagando con bitcoin: $%.2f\n"
			"d) Precio unitario: $%.2f\n"
			"La diferencia de precio es: $%.2f\n", precioViaje, debito, credito, bitcoin, unitario, diferencia);
}

void mostrarResultadosForzados(float km, float servicioUno, float debito, float credito, float bitcoin, float unitario)
{
	printf("KMs ingresados: %.2f", km);

	printf("\nAerolineas:%.2f\n"
				"a) Precio con tarjeta de debito: $%.2f\n"
				"b) Precio con tarjeta de credito: $%.2f\n"
				"c) Precio pagando con bitcoin: $%.2f\n"
				"d) Precio unitario: $%.2f\n", servicioUno, debito, credito, bitcoin, unitario);
}

void mostrarResultadosForzadosDos(float servicioDos, float debito, float credito, float bitcoin, float unitario, float diferencia)
{
	printf("\nLatam:%.2f\n"
				"a) Precio con tarjeta de debito: $%.2f\n"
				"b) Precio con tarjeta de credito: $%.2f\n"
				"c) Precio pagando con bitcoin: $%.2f\n"
				"d) Precio unitario: $%.2f\n"
				 "La diferencia de precio es: $%.2f\n", servicioDos, debito, credito, bitcoin, unitario, diferencia);
}

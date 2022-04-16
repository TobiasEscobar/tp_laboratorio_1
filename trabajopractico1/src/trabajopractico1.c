/*
 ============================================================================
 Name        : trabajopractico1.c
 Author      : Tobias Escobar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "calculos.h"

int main(void){
		setbuf(stdout, NULL);
		int opciones;
		int opcionElegida;
		int kilometros;
		float precioAerolineas;
		float precioLatam;
		int flagUno=0;
		int flagDos=0;
		int flagTres=0;
		int flagCuatro=0;
		float descuentoAerolineas;
		float descuentoLatam;
		float creditoAerolineas;
		float creditoLatam;
		float bitcoinAerolineas;
		float bitcoinLatam;
		float unitarioAerolineas;
		float unitarioLatam;
		float diferenciaDePrecio;
		int kilometrosForzados=7090;
		float aerolineasForzado=162965;
		float latamForzado=159339;

	do
	{
		opciones = utn_getNumero(&opcionElegida, "\n1. Ingresar Kilometros: \n""2. Ingresar Precio de Vuelos: \n" "3. Calcular todos los costos: \n""4. Informar Resultados \n""5. Carga forzada de datos \n" "6. Salir \n", "No es una opcion valida", 1, 6, 4);
			if(opciones == 0)
			{
				switch(opcionElegida)
				{
					case 1:
						if(flagUno == 0 || (kilometros>1000 && kilometros<15000))
						{
							utn_getNumero(&kilometros, "\nIngrese la cantidad de kilometros: \n", "\nError, ingrese una cantidad de KMs valida (entre 1000 y 15000)\n", 1000, 15000, 1);
							flagUno = 1;
						}
						break;
					case 2:
						if(flagUno == 0)
						{
							printf("Error, debe seleccionar primero la opcion 1");
						}
						else if((flagDos == 0 && flagTres == 0) || (precioAerolineas>90000 && precioAerolineas<600000) || (precioLatam>90000 && precioLatam<600000))
						{
							utn_getNumeroConDecimales(&precioAerolineas, "\nIngrese el precio para Aerolineas: \n", "\nError, ingrese nuevamente el precio\n", 90000, 600000, 1);
							flagDos = 1;
							utn_getNumeroConDecimales(&precioLatam, "\nIngrese el precio para Latam: \n", "\nError, ingrese nuevamente el precio\n", 90000, 600000, 1);
							flagTres = 1;
						}
						break;
					case 3:
						if(flagUno == 0 || flagDos == 0 || flagTres == 0)
						{
							printf("Error, debe ingresar primero datos en las opciones 1 y 2 para seleccionar esta");
						}
						else
						{
							descuentoAerolineas = calculoDebito(precioAerolineas, 10);
							descuentoLatam = calculoDebito(precioLatam, 10);
							creditoAerolineas = calculoCredito(precioAerolineas, 25);
							creditoLatam = calculoCredito(precioLatam, 25);
							bitcoinAerolineas = calculoBitcoin(precioAerolineas);
							bitcoinLatam = calculoBitcoin(precioLatam);
							unitarioAerolineas = calculoUnitario(precioAerolineas, kilometros);
							unitarioLatam = calculoUnitario(precioLatam, kilometros);
							diferenciaDePrecio = calculoDiferencia(precioAerolineas, precioLatam);

							flagCuatro=1;
						}
						break;
					case 4:
						if(flagUno == 0 || flagDos == 0 || flagTres == 0 || flagCuatro == 0)
						{
							printf("Error, debe ingresar primero la opcion 3 para elegir esta opcion");
						}
						else
						{
							mostrarResultadosAerolineas(precioAerolineas, descuentoAerolineas, creditoAerolineas, bitcoinAerolineas, unitarioAerolineas);
							mostrarResultadosLatam(precioLatam, descuentoLatam, creditoLatam, bitcoinLatam, unitarioLatam, diferenciaDePrecio);
						}
						break;
					case 5:
							descuentoAerolineas = calculoDebito(aerolineasForzado, 10);
							descuentoLatam = calculoDebito(latamForzado, 10);
							creditoAerolineas = calculoCredito(aerolineasForzado, 25);
							creditoLatam = calculoCredito(latamForzado, 25);
							bitcoinAerolineas = calculoBitcoin(aerolineasForzado);
						    bitcoinLatam = calculoBitcoin(latamForzado);
							unitarioAerolineas = calculoUnitario(aerolineasForzado, kilometrosForzados);
							unitarioLatam = calculoUnitario(latamForzado, kilometrosForzados);
							diferenciaDePrecio = calculoDiferencia(aerolineasForzado, latamForzado);

							mostrarResultadosForzados(kilometrosForzados, aerolineasForzado, descuentoAerolineas, creditoAerolineas, bitcoinAerolineas, unitarioAerolineas);
							mostrarResultadosForzadosDos(latamForzado, descuentoLatam, creditoLatam, bitcoinLatam, unitarioLatam, diferenciaDePrecio);
						break;
					case 6:
						printf("Salio del programa.");
						break;
				}
			}
	} while(opcionElegida!=6);
}

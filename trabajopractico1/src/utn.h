/*
 * utn.h
 *
 *  Created on: 10 abr. 2022
 *      Author: Tobias Escobar
 */

#ifndef UTN_H_
#define UTN_H_

/**
 * @brief Funcion que le pide numeros enteros al usuario y los valida.
 *
 * @param pResultado Guarda el numero ingresado
 * @param mensaje Muestra el mensaje.
 * @param mensajeError Muestra este mensaje en caso de error.
 * @param minimo Marca la cantidad minima de numeros que debe ingresar el usuario.
 * @param maximo Marca la cantidad maxima de numeros que debe ingresar el usuario.
 * @param reintentos Marca la cantidad de intentos que tiene el usuario para ingresar todos los numeros correctos.
 * @return Devuelve un [0] si recibio el numero, sino un [-1].
 */
int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);

/**
 * @brief Funcion que le pide numeross flotantes (decimales) al usuario y los valida
 *
 * @param pResultado Guarda el numero ingresado
 * @param mensaje  Muestra el mensaje
 * @param mensajeError Muestra este mensaje en caso de error.
 * @param minimo Marca la cantidad minima de numeros que debe ingresar el usuario.
 * @param maximo Marca la cantidad maxima de numeros que debe ingresar el usuario.
 * @param reintentos Marca la cantidad de intentos que tiene el usuario para ingresar todos los numeros correctos.
 * @return Devuelve un [0] si recibio el numero, sino un [-1].
 */
int utn_getNumeroConDecimales(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos);

#endif /* UTN_H_ */

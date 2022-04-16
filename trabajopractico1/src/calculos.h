/*
 * calculos.h
 *
 *  Created on: 10 abr. 2022
 *      Author: Tobias Escobar
 */

#ifndef CALCULOS_H_
#define CALCULOS_H_

/**
 * @brief Recibe un precio y un descuento para aplicarle al precio.
 *
 * @param precioViaje Es el precio que recibe.
 * @param descuentoAplicado Es el descuento que recibe.
 * @return Devuelve el precio descontado.
 */
float calculoDebito(float precioViaje,float descuentoAplicado);

/**
 * @brief Recibe un precio y un interes para aplicarle al precio.
 *
 * @param precioViaje Es el precio que recibe.
 * @param descuentoAplicado Es el descuento que recibe.
 * @return Devuelve el precio con el interes aplicado.
 */
float calculoCredito(float precioViaje,float interesAplicado);

/**
 * @brief Recibe un precio el cual debera ser pasado a la moneda bitcoin.
 *
 * @param precioViaje El precio que recibe.
 * @return Devuelve el precio pasado a bitcoin.
 */
float calculoBitcoin(float precioViaje);

/**
 * @brief Recibe un precio y una cantidad de kilometros para calcular el precio por cada km.
 *
 * @param precioViaje El precio que recibe.
 * @param kilometros Los kilometros que recibe.
 * @return Devuelve el precio hecho unitario.
 */
float calculoUnitario(float precioViaje, float kilometros);

/**
 * @brief Funcion que calcula la diferencia de 2 precios restandolos entre si.
 *
 * @param precioViaje Primer precio que recibe.
 * @param precioViajeDos Segundo precio que recibe.
 * @return Devuelve el resultado de la resta.
 */
float calculoDiferencia(float precioViaje, float precioViajeDos);

/**
 * @brief Funcion que recibe los datos calculados en la opcion 3 y se los muestra al usuario en forma de menu de opciones.
 *
 * @param precioViaje Precio que recibe.
 * @param debito Recibe el precio descontado.
 * @param credito Recibe el precio aumentado.
 * @param bitcoin Recibe el precio pasado a bitcoin.
 * @param unitario Recibe el precio hecho unitario.
 */
void mostrarResultadosAerolineas(float precioViaje, float debito, float credito, float bitcoin, float unitario);

/**
 * @brief Funcion que recibe los datos calculados en la opcion 3 y se los muestra al usuario en forma de menu de opciones.
 *
 * @param precioViaje Precio que recibe.
 * @param debito Recibe el precio descontado.
 * @param credito Recibe el precio aumentado.
 * @param bitcoin Recibe el precio pasado a bitcoin.
 * @param unitario Recibe el precio hecho unitario.
 * @param diferencia Muestra la diferencia de precio que hay entre el primer y segundo servicio que ofrece el programa.
 */
void mostrarResultadosLatam(float precioViaje, float debito, float credito, float bitcoin, float unitario, float diferencia);

/**
 * @brief  Funcion que recibe los datos forzados del main, ya calculados y se los muestra al usauario en forma de menu de opciones,
 * para que vea la variedad de opciones de pago.
 *
 * @param km Recibe la cantidad de kilometros asignados forzosamente.
 * @param servicioUno Recibe el precio asignado forzosamente.
 * @param debito El precio forzado descontado.
 * @param credito El precio forzado aumentado.
 * @param bitcoin El precio forzado pasado a bitcoin.
 * @param unitario El precio forzado pasado a unitario.
 */
void mostrarResultadosForzados(float km, float servicioUno, float debito, float credito, float bitcoin, float unitario);

/**
 * @brief Funcion que recibe los datos forzados del main, ya calculados y se los muestra al usauario en forma de menu de opciones,
 * para que vea la variedad de opciones de pago.
 *
 * @param servicioDos Recibe el precio asignado forzosamente.
 * @param debito El precio forzado descontado.
 * @param credito El precio forzado aumentado.
 * @param bitcoin El precio forzado pasado a bitcoin.
 * @param unitario El precio forzado pasado a unitario.El precio forzado pasado a unitario.
 * @param diferencia Muestra la diferencia del precio forzado que hay entre el primer y segundo servicio.
 */
void mostrarResultadosForzadosDos(float servicioDos,float debito, float credito, float bitcoin, float unitario, float diferencia);



#endif /* CALCULOS_H_ */

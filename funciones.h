/**
 * @file funciones.h
 * @brief Interfaz para cálculo de IMC y operaciones con matrices.
 * @author Juan Ballesteros Suarez
 * @date 2025-07-08
 */

#ifndef __MODULO_H__
#define __MODULO_H__

#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int printFunction();

/**
 * @brief Calcula el Índice de Masa Corporal (IMC).
 * @param masa Peso en kilogramos.
 * @param altura Altura en metros.
 * @return Valor del IMC.
 */

float imcFuncion(float masa, float altura);

/**
 * @brief Imprime una matriz cuadrada.
 * @param N Tamaño de la matriz.
 * @param mA Matriz a imprimir.
 */
void impMatrix(int N, float mA[N][N]);

/**
 * @brief Multiplica dos matrices cuadradas.
 * @param N Tamaño de las matrices.
 * @param mA Primera matriz.
 * @param mB Segunda matriz.
 * @param mC Matriz resultado (debe estar previamente allocada).
 */

void matrixMulti(int N, float mA[N][N], float mB[N][N], float mC[N][N]);

/**
 * @brief Llena dos matrices con valores aleatorios.
 * @param N Tamaño de las matrices.
 * @param mA Primera matriz a llenar.
 * @param mB Segunda matriz a llenar.
 */

void llenarMatriz(int N, float mA[N][N], float mB[N][N]);



#endif

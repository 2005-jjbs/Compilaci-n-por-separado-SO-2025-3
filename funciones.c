/**
 * @file funciones.c
 * @brief Implementación de las funciones para IMC y matrices.
 * @author Juan Ballesteros Suarez
 * @date 2025-07-08
 */

#include "funciones.h"
/**
 * @brief Imprime un encabezado decorativo para la calculadora de IMC.
 * @return Siempre retorna 0 (éxito).
 */
int printFunction(){
    printf("*********************************\n");
    printf("*  Calculadora de Masa Corporal  \n");
    printf("*********************************\n");
    return 0;
}
/**
 * @brief Calcula el IMC con validación de entradas.
 * @param masa Peso en kg.
 * @param altura Altura en m.
 * @return IMC o -1 si los valores son inválidos.
 */
float imcFuncion(float masa, float altura){
    float imc = masa / (altura * altura);
    return imc;
}
/**
 * @brief Imprime una matriz formateada.
 * @param N Tamaño de la matriz.
 * @param mA Matriz a imprimir.
 */
void impMatrix(int N, float mA[N][N]){
  for(int i = 0; i<N; i++){
    for(int j = 0; j<N; j++){
      printf("%f", mA[i][j]);
    }
    printf("\n");
  }
}
/**
 * @brief Multiplica matrices usando triple bucle anidado.
 * @param N Tamaño de las matrices.
 * @param mA Primera matriz.
 * @param mB Segunda matriz.
 * @param mC Matriz resultado (se sobrescribe).
 */
void matrixMulti(int N, float mA[N][N], float mB[N][N], float mC[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            mC[i][j] = 0;
            for (int k = 0; k < N; k++) {
                mC[i][j] += mA[i][k] * mB[k][j];
            }
        }
    }
}
/**
 * @brief Llena matrices con valores aleatorios.
 * @param N Tamaño de las matrices.
 * @param mA Matriz a llenar.
 * @param mB Matriz a llenar.
 */
void llenarMatriz(int N, float mA[N][N], float mB[N][N]){
  for(int i = 0; i<N; i++){
    for(int j = 0; j<N; j++){
      mA[i][j]  = rand()%10*0.121;
      mB[i][j] = rand()%10;
    }
  }
}
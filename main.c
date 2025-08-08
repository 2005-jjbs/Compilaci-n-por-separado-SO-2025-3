/**
 * @brief Programa principal que calcula el IMC y realiza operaciones con matrices.
 * @param argc Cantidad de argumentos recibidos por línea de comandos.
 * @param argv Argumentos: altura, masa, tamaño de matriz.
 * @return 0 si finaliza correctamente.
 */

#include "funciones.h"


int main(int argc, char *argv[]){
    // Verifica que haya suficientes argumentos
    if(argc<4){
        printf("$./ejecutable valor1 valor2 valor3\n");
        exit(0);
    }

    // Conversión de argumentos
    float altura = (float)atof(argv[1]);
    float masacorporal = (float)atof(argv[2]);
    int N = (int)atof(argv[3]);

    // Imprime encabezado
    printFunction();

    // Calcula IMC
    float valorIMC = imcFuncion(masacorporal, altura);
    printf("El indice de masa corporal es: %f\n", valorIMC);

    // Operaciones con matrices
    float m1[N][N], m2[N][N], m3[N][N];
    llenarMatriz(N,m1,m2);

    printf("\nMatriz 1:\n");
    impMatrix(N,m1);
    printf("\nMatriz 2:\n");
    impMatrix(N,m2);

    printf("\nMatriz 3 (Multiplicacion):\n");
    matrixMulti(N,m1,m2,m3);
    impMatrix(N,m3);

    return 0;
}

/*
 * Copiar bloques de bytes con memcpy
 * Demostracion de copia de bloques de memoria cruda
 * tanto en arreglos y variables primitivas.
 *
 * Compilar con: gcc ejemplo1_memcpy.c -o ejemplo1_memcpy
 */

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int arr1[] = {1, 2};
    int arr2[] = {3, 4};

    float n1 = 5.6f;
    float n2 = 6.7f;

    // Caso 1: arreglos (punteros implicitos)
    memcpy(arr1, arr2, 2 * sizeof(int));

    printf("Nuevo arr1: [%d, %d]\n", arr1[0], arr1[1]);

    // Caso 2: variables primitivas (punteros explicitos)
    memcpy(&n1, &n2, sizeof(float));

    printf("Valor nuevo de n1: %.1f\n", n1);

    return 0;
}
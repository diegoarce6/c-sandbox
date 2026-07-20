/*
 * Establece n bytes en el segmento de memoria apuntada por 's'
 * con el byte constante 'c'. 
 * 
 * void *memset(void *s, int c, size_t n);
 * - s: puntero al bloque de memoria
 * - c: Valor que se copiará (unsigned char)
 * - n: número de bytes a modificar
 * Devuelve un puntero a 's'
 * 
 * Compilar con: gcc ejemplo1_memset.c -o ejemplo1_memset
 */

#include <stdio.h>
#include <string.h>

#define N 5
#define BUFFER_SIZE 10

int main(int argc, char const *argv[])
{
   int arr[N];
   char str[BUFFER_SIZE];

   // Inicializa todos los bytes del array a 0 de manera rápida y segura
   memset(arr, 0, sizeof(arr));

   for (int i = 0; i < N; i++)
      printf("%d ", arr[i]);
   printf("\n");

   // Es importante tener en cuenta que memset trabaja a nivel de bytes, no con valores según su tipo de dato
   memset(arr, 1, sizeof(arr));

   for (int i = 0; i < N; i++)
      printf("%08x ", arr[i]);
   printf("\n");

   // En el caso de una string, como un char ocupa exactamente 1 byte se asigna de forma directa
   memset(str, '*', sizeof(str) - 1);
   str[BUFFER_SIZE - 1] = '\0'; // finalmente se le agrega el terminador de cadena 
   
   printf("%s\n", str);

   return 0;
}
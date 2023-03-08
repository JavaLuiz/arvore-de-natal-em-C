#include <stdio.h>


int main()
{
  int i, n, x, y, tronco, esp, tr, k;
  printf("por favor digite o tamanho das folhas: ");
  scanf("%d", &n);
  for (esp = 0; esp < n; esp++){
    printf(" ");
  }
    printf("X\n");

  for (i = 1; i < n; i++)                      // linhas
  {
    for (x = n - i; x >= 1; x--)                // espaços a esquerda
      printf(" ");
    for (x = 1; x <= i; x++)                    // lado esquerdo
      printf("*");
    printf("I");
    for (y = 1; y <= i; y++)                    // lado direito
      printf("*");
    printf("\n");
  }

  for (k = 0; k < n*0.60; k++)                  // parte do tronco
  {  for(esp = 0; esp < n; esp++){
      printf(" ");

    }
    printf("H\n");
    }
}
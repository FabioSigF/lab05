#include <stdio.h>
/*
24. Escreva uma função que gera um triângulo de altura e lados n e base 2*n-1. 
*/

void geraTriang(int n);

void main()
{
  int n;
  printf("Digite um numero: ");
  scanf("%d", &n);
  geraTriang(n);
}

void geraTriang(int n)
{
  int base = (2*n)-1;
  int sobras;
  for (int i = 2; i <= n*2; i+=2)
  {
    sobras = (base+1) - i;
    for (int j = 0; j < sobras/2; j++)
    {
      printf(" ");
    }
    for (int k = sobras; k < base; k++)
    {
      printf("*");
    }
    
    for (int j = 0; j < sobras/2; j++)
    {
      printf(" ");
    }
    putchar('\n');
  }
  
}
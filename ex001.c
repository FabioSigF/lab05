#include <stdio.h>
/*Crie uma função que recebe como parâmetro um número inteiro e devolve o seu dobro.*/

int dobrar(int n);

void main()
{
  int num;
  printf("Digite um numero inteiro: ");
  scanf("%d", &num);
  num = dobrar(num);
  printf("O dobro do numero digitado: %d", num);
}

int dobrar(int n)
{
  return n * 2;
}
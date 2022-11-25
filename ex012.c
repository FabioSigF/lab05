#include <stdio.h>

/*12. Escreva uma função que receba um número inteiro maior do que zero e retorne a soma de todos os seus algarismos. Por exemplo, ao número 251 corresponderá o valor 8 (2 + 5 + 1). Se o número lido não for maior do que zero, o programa terminará com a mensagem “Número inválido”.*/

int somaAlgarismos(int n);

void main()
{
  int num, res;

  printf("Digite um numero inteiro: ");
  scanf("%d", &num);

  if (num > 0)
  {
    res = somaAlgarismos(num);
    printf("A soma de todos os algarismos de %d foi igual a: %d.", num, res);
  } else {
    printf("Numero invalido!");
  }

}

int somaAlgarismos(int n)
{
  int sum, res, div;
  sum = 0;
  while (n >= 10)
  {
    /*Pegamos os primeiros dígitos do numero*/
    div = n / 10;
    /*Tiramos o último digito*/
    res = n % 10;
    /*Somamos o valor de cada digito*/
    sum += res;
    /*n se torna os digitos iniciais*/
    n = div;

    if (n < 10)
    {
      sum += n;
    }
  }

  return sum;
}
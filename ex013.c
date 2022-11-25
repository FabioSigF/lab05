#include <stdio.h>

/*13. Faça uma função que receba dois valores numéricos e um símbolo. Este símbolo
representará a operação que se deseja efetuar com os números. Se o símbolo for ‘+’ deverá ser realizada uma adição, se for ‘–‘ uma subtração, se for ‘*’ uma multiplicação e se for ‘/’ será efetuada uma divisão.
*/

float operaValores(float n1, float n2, char op);

void main()
{
  float n1, n2, res;
  char op;

  printf("Digite o 1o numero: ");
  scanf("%f", &n1);
  printf("Digite o 2o numero: ");
  scanf("%f", &n2);
  printf("Qual operacao deseja fazer?\n '+' Adicao\n '-' Subtracao\n '/' Divisao\n '*' Multiplicacao\n R= ");
  scanf(" %c", &op);

  operaValores(n1, n2, op);
}

float operaValores(float n1, float n2, char op)
{
  float calc;
  if ((op == '+') || (op == '-') || (op == '/') || (op == '*'))
  {
    switch (op)
    {
    case '+':
      calc = (n1 + n2);
      break;
    case '-':
      calc = (n1 - n2);
      break;
    case '/':
      calc = (n1 / n2);
      break;
    case '*':
      calc = (n1 * n2);
      break;
    }
    return printf("O resultado da operacao foi %.2f.", calc);
  }
  else {
    return printf("Operador invalido. FIM DO PROGRAMA.");
  }
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  printf("Jéssica Pegoraro Drawanz - ADS - Universidade La Salle - 202111952\n");
  printf("Atividade de Produção - Calculadora em C\n\n\n");

  // https://github.com/je-pegoraro/ADS---La-Salle
  // Linguagem C: Variáveis e Operadores - Prof. Leonardo Barreto Campos
  // Vídeos de Linguagem C no YouTube, exemplo: https://www.youtube.com/watch?v=aISV1NBigW4
  // Unidade 2 da apostila, principal página 120.
  
 float Operacao1=0, Operacao2=0, Resultado=0;
 int op=0;
  { 
    printf("Digite a operação desejada:\n\n");
    printf("1 - Soma\n\v2 - Subtração\n\v3 - Multiplicação\n\v4 - Divisão\n\v5 - Raiz Quadrada\n\v6 - Potenciação\n");
    scanf("%i", &op);
  {
    printf("\nDigite um número: ");
    scanf("%f", &Operacao1); 
    }
  if(op!=5) // Para fazer o if solicitei ajuda a uma colega de trabalho, pois tentei assistindo vídeos e estava dando erro no meu código.
  {
    printf("\nDigite o segundo número: ");
    scanf("%f", &Operacao2);
    }
    switch(op)
    {
      case 1:
      printf("\n\t O resultado da soma é: %0.2f", Operacao1 + Operacao2);
      break;
      case 2:
      printf("\n\t O resultado da subtracao é: %0.2f", Operacao1 - Operacao2);
      case 3:
      printf ("\n\t O resultado da multiplicacao é: %0.2f", Operacao1 * Operacao2);
      break;
      case 4:
      if(Operacao2 == 0)
      {
        printf("Não é possível dividir por zero.");
        }
        else {
      printf("\n\t O resultado da divisao é: %0.2f", Operacao1 / Operacao2);
          }
      break;
      case 5:
      printf("\n\t O resultado da raiz quadrada é: %0.2f", sqrt(Operacao1));
      break;
      case 6:
      printf("\n\t O resultado da potencia é: %0.2f", Operacao1, Operacao2);
      break;
      default:
      printf("\nDigite uma opção válida\n");
      break;
      }
    scanf("%i", &op);
    }
  }
        
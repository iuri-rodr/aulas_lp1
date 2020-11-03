#include <stdio.h>

int main(int argc, char const *argv[])
{
    /**
     * @brief 
     * Autor:: Iúri Rodrigues
     * Data: 03/11/2020
     */

    //declarar variáveis
    float num1, num2, num3, num4, num5, num6, num7, num8, soma, subtracao, multiplicacao, divisao;
    printf("Escolha o numero 1 para soma");
    scanf("%f", &num1);
    printf("Escolha o numero 2 para soma");
    scanf("%f", &num2);
    printf("Escolha o numero 1 para subtrair");
    scanf("%f", &num3);
    printf("Escolha o numero 1 para subtrair");
    scanf("%f", &num4);
    printf("Escolha o numero 2 para multiplicaçao");
    scanf("%f", &num5);
    printf("Escolha o numero 1 para multiplicaçao");
    scanf("%f", &num6);
    printf("Escolha o numero 2 para divisao");
    scanf("%f", &num7);
    printf("Escolha o numero 1 para divisao");
    scanf("%f", &num8);

    soma = num1 + num2;
    subtracao = num3 - num4;
    multiplicacao = num5 * num6;
    divisao = num7 / num8;

    printf("a soma e: %.2f", soma);
    printf("a multiplicacao e: %.2f", multiplicacao);
    printf("a subtracao e: %.2f", subtracao);
    printf("a divisao e: %.2f", divisao);

    return 0;
}

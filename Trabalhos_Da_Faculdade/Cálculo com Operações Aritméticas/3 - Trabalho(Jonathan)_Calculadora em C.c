/*
    NOTA: Este código foi desenvolvido em um ambiente onde a codificação de caracteres UTF-8 não está funcionando corretamente.
    Como resultado, as palavras "Subtração" e "Multiplicação" foram escritas sem acentuação para evitar a exibição de caracteres estranhos.
    O problema de codificação será investigado e corrigido em uma versão futura do código.
*/

#include <stdio.h>
#include <locale.h>

int main() {

    // Declara variáveis do tipo float para armazenar os números e os resultados das operações.
    float num1, num2, soma, subtracao, multiplicacao, divisao;

    // Exibe o título da calculadora de forma mais organizada.
    printf("\n--- Calculadora Financeira ---\n\n");

    // Solicita e lê o primeiro número do usuário.
    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);

    // Solicita e lê o segundo número do usuário.
    printf("Digite o segundo valor: ");
    scanf("%f", &num2);

    // Calcula as operações aritméticas básicas.
    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;

    // Verifica se o segundo número é zero para evitar divisão por zero.
    if (num2 != 0) {
        divisao = num1 / num2;
    } else {
        // Exibe uma mensagem de erro caso o segundo número seja zero.
        printf("\nErro! Divisao por zero nao e permitida.\n");
        return 1; // Encerra o programa com código de erro.
    }

    // Exibe os resultados das operações de forma organizada.
    printf("\n--- Resultados ---\n");
    printf("%.2f + %.2f = %.2f (Soma)\n", num1, num2, soma);
    printf("%.2f - %.2f = %.2f (Subtracao)\n", num1, num2, subtracao);
    printf("%.2f * %.2f = %.2f (Multiplicacao)\n", num1, num2, multiplicacao);
    printf("%.2f / %.2f = %.2f (Divisao)\n", num1, num2, divisao);

    return 0; // Indica que o programa foi executado com sucesso.
}
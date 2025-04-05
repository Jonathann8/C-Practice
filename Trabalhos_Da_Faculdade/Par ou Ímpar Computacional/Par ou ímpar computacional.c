#include <stdio.h>      // Inclui a biblioteca padrão de entrada e saída
#include <string.h>     // Inclui a biblioteca para manipulação de strings
#include <time.h>       // Inclui a biblioteca para funções de tempo

// Funcao para verificar se um numero eh par ou impar
char* verificarParImpar(int numero) {
  if (numero % 2 == 0) { // Se o resto da divisao por 2 for 0
    return "par";       // Retorna a string "par"
  } else {                // Caso contrario
    return "impar";     // Retorna a string "impar"
  }
}

// Funcao para criar uma pequena pausa (aproximadamente 'delay' segundos)
void delay(float delay) {
  clock_t start_time = clock();             // Marca o tempo de inicio
  while ((float)(clock() - start_time) / CLOCKS_PER_SEC < delay); // Loop ate o tempo decorrido ser maior que o delay
}

int main() {
  int numeroInicial, numeroFinal; // Declara duas variaveis inteiras para o intervalo
  int paresEncontrados = 0;       // Declara e inicializa o contador de numeros pares

  // Tela de Saudacao
  printf("----------------------------------------\n"); // Imprime uma linha separadora
  printf("          Jogo Par ou Impar v1.0        \n"); // Imprime o titulo do programa
  printf("----------------------------------------\n"); // Imprime outra linha separadora
  printf("\nBem-vindo(a)!\n");                     // Imprime a mensagem de boas-vindas

  // Solicitar os numeros ao usuario
  printf("\nDigite o numero inicial do intervalo: "); // Pede o numero inicial
  scanf("%d", &numeroInicial);                    // Le o numero inicial digitado
  printf("Digite o numero final do intervalo: ");   // Pede o numero final
  scanf("%d", &numeroFinal);                      // Le o numero final digitado

  printf("\nVerificando os numeros no intervalo de %d a %d, aguarde...\n", numeroInicial, numeroFinal); // Informa o inicio da verificacao

  // Loop para percorrer os numeros no intervalo
  for (int i = numeroInicial; i <= numeroFinal; i++) { // Loop de numeroInicial ate numeroFinal (inclusive)
    // Chamar a funcao para verificar se o numero eh par ou impar
    char* status = verificarParImpar(i); // Chama a funcao e guarda o status (par ou impar)

    // Exibir a mensagem com o numero e seu status
    printf("O numero %d -> %s.\n", i, status); // Imprime o numero e se eh par ou impar

    // Verificar se o numero eh par e incrementar o contador
    if (strcmp(status, "par") == 0) { // Compara se o status eh "par"
      paresEncontrados++;           // Incrementa o contador de pares
    }

    // Adicionar uma pequena pausa (0.5 segundos)
    delay(0.5);                     // Chama a funcao para criar uma pausa
  }

  // Tela de Resultado
  printf("\n-------------------- Resultado --------------------\n"); // Imprime uma linha separadora para o resultado
  printf("Total de numeros pares encontrados no intervalo: %d\n", paresEncontrados); // Imprime a quantidade de pares
  printf("---------------------------------------------------\n"); // Imprime outra linha separadora

  // Mensagem de Despedida
  printf("\nVolte sempre! Obrigado por utilizar o programa.\n"); // Imprime a mensagem de despedida

  return 0; // Indica que o programa terminou com sucesso
}
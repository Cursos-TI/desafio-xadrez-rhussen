#include <stdio.h> // Biblioteca padrão para entrada e saída de dados, como o printf.

/*
 * Descrição: Este programa simula o movimento de três peças de xadrez
 * (Torre, Bispo e Rainha) utilizando diferentes estruturas de repetição
 * para cada uma, conforme o desafio de nível novato.
 */

int main() {
 
    /*1. Movimento da Torre (usando o loop 'for') */

        printf("--- Movimento da Torre (3 casas para a Direita) ---\n");  // A Torre se moverá 3 casas para a direita.
    
    const int casas_torre = 3; // Define o número de casas que a Torre vai andar.'const' significa que este valor não pode ser alterado.
    for (int i = 1; i <= casas_torre; i++); // O loop 'for' é inicializado com a variável 'i' em 1. A condição de parada é 'i <= casas_torre'.  A cada passo, 'i' é incrementado em 1 (i++).
    {  
        printf("Passo %d: Direita\n", i); // Imprime a direção do movimento para cada casa percorrida. O '%d' é um marcador que será substituído pelo valor da variável 'i'.
    }
        printf("\n"); // Adiciona uma linha em branco para melhor organização da saída.
    /*
    2. Movimento do Bispo (usando o loop 'while')
    Usaremos o 'while' para demonstrar outra forma de criar um loop
    */
        printf("--- Movimento do Bispo (4 casas na Diagonal Cima-Direita) ---\n");   // O Bispo se moverá 4 casas na diagonal para cima e à direita.
    
    const int casas_bispo = 4;
    int passo_atual_bispo = 1; // Variável de controle que inicializamos fora do loop.
    while (passo_atual_bispo <= casas_bispo) {  // O loop 'while' (enquanto) continuará executando o bloco de código enquanto a condição 'passo_atual_bispo <= casas_bispo' for verdadeira.
        printf("Passo %d: Cima, Direita\n", passo_atual_bispo);    // Imprime a combinação de direções para o movimento diagonal. MUITO IMPORTANTE: Precisamos incrementar a variável de controle manualmente
    passo_atual_bispo++; //dentro do loop. Se esquecermos, criaremos um "loop infinito".
    }
        printf("\n"); // Linha em branco para separar.
   
    /*
    ***** 3. Movimento da Rainha (usando o loop 'do-while')
    O 'do-while' é similar ao 'while', mas ele garante que o bloco de código seja executado PELO MENOS UMA VEZ antes de verificar a condição.
    */
        printf("--- Movimento da Rainha (7 casas para a Esquerda) ---\n"); // A Rainha se moverá 7 casas para a esquerda.
    const int casas_rainha = 7;
    int passo_atual_rainha = 1; // Variável de controle.
    
    do {     // O 'do' (faça) executa o bloco de código abaixo.
        printf("Passo %d: Esquerda\n", passo_atual_rainha);   // Imprime a direção do movimento.

        passo_atual_rainha++;  // Incrementa o contador para o próximo passo.
        
    } 
    while (passo_atual_rainha <= casas_rainha); // A condição é verificada no final.
    
    printf("\n");

    return 0;
}
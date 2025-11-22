    //-------------------------------------------
    // PARTE 1: Preparação Inicial e variáveis
    //-------------------------------------------


#include <stdio.h>

int main() {
    int numero = 1; // Inicializa com 1 para entrar no loop
    int soma = 0;

 

    //-------------------------------------------
    // PARTE 2: A Estrutura de Repetição (while)
    //-------------------------------------------
    
    
    printf("Calculadora de Soma - Insira numeros inteiros.\n");

    while (numero != 0) {
        printf("Digite um numero inteiro (ou 0 para sair): ");
        scanf("%d", &numero);

        if (numero != 0) {
            soma = soma + numero;
        }
    }
    // ... (restante do código no próximo passo)
    
    
    
    
    //-------------------------------------------
    // PARTE 3: Resultado Final
    //-------------------------------------------
    
    
    printf("\n--- RESULTADO ---\n");
    printf("A soma total dos numeros inseridos e: %d\n", soma);
    
    return 0;
}
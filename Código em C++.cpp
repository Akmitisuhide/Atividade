#include <stdio.h>

int main() {
    const double TAXA_JUROS = 0.05;

    double valorInicial, valorFinal;
    int anos;

    printf("Digite o valor inicial do investimento: ");
    scanf("%lf", &valorInicial);
    printf("Digite o numero de anos: ");
    scanf("%d", &anos);

    valorFinal = valorInicial * (1 + (TAXA_JUROS * anos));

    printf("Valor final do investimento apos %d anos: %.2f\n", anos, valorFinal);

    int vetor[3] = {10, 20, 30};
    int matriz[2][2] = {{1, 2}, {3, 4}};

    int *ptr = vetor;
    *ptr = 100;

    printf("\n--- Valores do Vetor ---\n");
    for (int i = 0; i < 3; i++) {
        printf("vetor[%d] = %d | Endereco: %p\n", i, vetor[i], (void*)&vetor[i]);
    }

    printf("\n--- Valores da Matriz ---\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("matriz[%d][%d] = %d | Endereco: %p\n", i, j, matriz[i][j], (void*)&matriz[i][j]);
        }
    }

    return 0;
}

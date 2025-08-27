#include <stdio.h>

int main() {
    float nota, soma = 0, media;
    float maior = -1, menor = 11;
    int qtd = 0, aprovados = 0, reprovados = 0;

    printf("Digite as notas dos alunos (ou -1 para encerrar):\n");

    while (1) {
        printf("Nota %d: ", qtd + 1);
        scanf("%f", &nota);

        if (nota == -1) {
            break;
        }

        if (nota < 0 || nota > 10) {
            printf("Nota invalida! Digite entre 0 e 10 ou -1 para sair.\n");
            continue;
        }

        soma += nota;
        qtd++;

        if (nota > maior) {
            maior = nota;
        }
        if (nota < menor) {
            menor = nota;
        }

        if (nota >= 6) {
            aprovados++;
        }
        else {
            reprovados++;
        }
    }

    if (qtd > 0) {
        media = soma / qtd;
        printf("\n--- RESULTADOS ---\n");
        printf("Quantidade de alunos: %d\n", qtd);
        printf("Media da turma: %.2f\n", media);
        printf("Maior nota: %.2f\n", maior);
        printf("Menor nota: %.2f\n", menor);
        printf("Aprovados: %d\n", aprovados);
        printf("Reprovados: %d\n", reprovados);
    }
    else {
        printf("Nenhuma nota valida foi inserida.\n");
    }

    return 0;
}

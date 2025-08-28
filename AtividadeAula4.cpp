#include <stdio.h>
#include <time.h>

int fibonacciRecursivaSimples(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacciRecursivaSimples(n - 1) + fibonacciRecursivaSimples(n - 2);
}

int fibonacciRecursivaCaudaHelper(int n, int a, int b) {
    if (n == 0) return a;
    if (n == 1) return b;
    return fibonacciRecursivaCaudaHelper(n - 1, b, a + b);
}

int fibonacciRecursivaCauda(int n) {
    return fibonacciRecursivaCaudaHelper(n, 0, 1);
}

int main() {
    int n;
    scanf("%d", &n);

    if (n < 0) return 0;

    clock_t inicio, fim;
    double tempoSimples = 0.0, tempoCauda = 0.0;
    int resultadoSimples = -1;

    if (n <= 40) {
        inicio = clock();
        resultadoSimples = fibonacciRecursivaSimples(n);
        fim = clock();
        tempoSimples = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
    }

    inicio = clock();
    int resultadoCauda = fibonacciRecursivaCauda(n);
    fim = clock();
    tempoCauda = ((double)(fim - inicio)) / CLOCKS_PER_SEC;

    if (resultadoSimples != -1)
        printf("%d %.6f\n", resultadoSimples, tempoSimples);
    printf("%d %.6f\n", resultadoCauda, tempoCauda);

    return 0;
}

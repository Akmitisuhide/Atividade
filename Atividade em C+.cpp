#include <stdio.h>
#include <string.h>
#define MAX_STRING_LENGTH 50

const int CONST_NUM = 100;
int main (
 int num1, num2;
 float num3;
 char str[MAX_STRING_LENGTH];
 
 int vetor[3] = {1, 2, 3};
 int matriz[2][2] = {{1, 2}, {3, 4}};

 int *ptr_num1;
 num1 = 10;
 num2 = 20;
 num3 = 15.5;
 strcpy(str, "Queijo");

 ptr_num1 = &num1;

 printf("Digite um número inteiro: ");
 scanf("%d", &num1);

 printf("Digite outro número inteiro: ");
 scanf("%d", &num2);

 printf("Digite um número real: ");
 scanf("%f", &num3);

 printf("Digite uma string: ");
 scanf("%s", str);
 
 int soma = num1 + num2;
 float media = (num1 + num2 + num3) / 3;
 
 int resultado_bool = (num1 > num2) && (num3 > CONST_NUM);
 
 printf("Soma de num1 e num2: %d\n", soma);
 printf("Média dos números: %.2f\n", media);
 printf("Resultado da operação booleana: %d\n", resultado_bool);
 
 printf("Elementos do vetor: %d, %d, %d\n", vetor[0], vetor[1], vetor[2]);

 printf("Elementos da matriz: %d, %d, %d, %d\n", matriz[0][0], matriz[0][1], matriz[1][0], matriz[1][1]);
 
 printf("Valor de num1: %d\n", *ptr_num1);
 printf("Endereço de num1: %p\n", ptr_num1);
 printf("Endereço de str: %p\n", (void*)&str);

 return 0;

)
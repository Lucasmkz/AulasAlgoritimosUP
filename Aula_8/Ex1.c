
#include <stdio.h>

int main() {
    int N, i, soma = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &N);

    while (N <= 0) { //while (N <= 0): solicita outro número enquanto N não for positivo.


        printf("Digite um numero inteiro: ");
        scanf("%d", &N);
    }

    for (i = 2; i <= N; i += 2) { //for (i = 2; i <= N; i += 2): percorre os números pares de 2 até N.


        soma += i; //soma += i: adiciona cada número par à soma.


    }

    printf("Soma par = %d", soma);

    return 0;
}

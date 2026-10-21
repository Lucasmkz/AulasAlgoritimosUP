
#include <stdio.h>

int main() {
    int senha, tentativas = 0; //tentativas: conta quantas vezes o usuário tentou.


//do-while: executa o pedido de senha pelo menos uma vez.


    do {
        printf("Digite sua senha: ");

        if (scanf("%d", &senha) != 1) {
            printf("Senha invalida, tente novamente\n");

            while (getchar() != '\n');
            tentativas++;
            continue;
        }

        tentativas++;

        if (senha == 1234) {
            printf("Acesso liberado\n");
            break;
        }

        if (tentativas < 3) {
            printf("Senha invalida, tente novamente\n");
        }

    } while (tentativas < 3);

    if (tentativas == 3 && senha != 1234) {
        printf("Conta bloqueada\n");
    }

    return 0;
}

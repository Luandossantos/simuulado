#include <stdio.h>
#include <string.h>

int main() {
    char nome_jogador[100];
    int dado1, dado2;
    float tempo_resposta;
    int soma;

    // Solicita informações ao usuário
    printf("Digite o nome do jogador: ");
    fgets(nome_jogador, sizeof(nome_jogador), stdin);

    // Remove o '\n' do final caso o usuário aperte ENTER
    nome_jogador[strcspn(nome_jogador, "\n")] = '\0';

    printf("Digite o valor do primeiro dado: ");
    scanf("%d", &dado1);

    printf("Digite o valor do segundo dado: ");
    scanf("%d", &dado2);

    printf("Digite o tempo de resposta em segundos: ");
    scanf("%f", &tempo_resposta);

    // Calcula a soma dos dados
    soma = dado1 + dado2;

    // Verifica as condições para bônus
    if (soma >= 10 && tempo_resposta < 5) {
        printf("Parabéns, %s! Bônus concedido!\n", nome_jogador);
    } else {
        printf("Que pena, %s. Sem bônus dessa vez.\n", nome_jogador);
    }

    return 0;
}

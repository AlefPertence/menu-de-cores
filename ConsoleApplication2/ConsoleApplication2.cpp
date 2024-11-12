/*Exercício 1: Menu de Cores
Faça um programa que mostre um menu com 5 opções de cores:
1 - Vermelho
2 - Azul
3 - Verde
4 - Amarelo
5 - Preto
O usuário deve escolher um número de 1 a 5, e o programa deve exibir o nome da cor correspondente.
Se o número estiver fora do intervalo, o programa deve exibir "Opção inválida"*/

#include <stdio.h>;

int main() {

    int num;

    printf("esolha uma opção de 1 a 5 para selecionar a cor que deseja: \n 1 - vermelhor\n 2 - azul \n 3 - verde \n 4 - amarelo\n 5 - preto\n digite aqui: ");
    scanf_s("%d", &num);
    {}
    switch (num) {
    case (1): printf("vermelho");
        break;

    case (2): printf("azul");
        break;

    case (3): printf("azul");
        break;

    case (4): printf("amarelo");
        break;

    case (5): printf("preto");
        break;

    default:
        printf("opcao invalida");
    }

}
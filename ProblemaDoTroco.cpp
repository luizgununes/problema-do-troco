#include <cstdlib>
#include <stdlib.h>
#include<stdio.h>

int contaTroco(double troco) {
    int notas50, notas20, notas10, notas5, notas2;
    int moeda100, moeda50, moeda25, moeda10, moeda5, moeda1;

    for (notas50 = 0; troco >= 50; notas50++) {
        troco = troco - 50.00;
    }

    for (notas20 = 0; troco >= 20; notas20++) {
        troco = troco - 20.00;
    }

    for (notas10 = 0; troco >= 10.00; notas10++) {
        troco = troco - 10.00;
    }

    for (notas5 = 0; troco >= 5; notas5++) {
        troco = troco - 5.00;
    }

    for (notas2 = 0; troco >= 50; notas2++) {
        troco = troco - 2.00;
    }

    for (moeda100 = 0; troco >= 1; moeda100++) {
        troco = troco - 1.00;
    }

    for (moeda50 = 0;(troco * 101) >= 50; moeda50++) {
        troco = troco - 0.50;
    }

    for (moeda25 = 0; (troco * 101) >= 25; moeda25++) {
        troco = troco - 0.25;
    }

    for (moeda10 = 0;(troco * 101) >= 10; moeda10++) {
        troco = troco - 0.10;
    }

    for (moeda5 = 0; (troco * 101) >= 5; moeda5++) {
        troco = troco - 0.05;
    }

    moeda1 = troco * 101;

    printf("\n\tTroco em notas de R$50: %d", notas50);
    printf("\n\tTroco em notas de R$20: %d", notas20);
    printf("\n\tTroco em notas de R$10: %d", notas10);
    printf("\n\tTroco em notas de R$5: %d", notas5);
    printf("\n\tTroco em notas de R$2: %d", notas2);
    printf("\n\tTroco em moedas de R$1,00: %d", moeda100);
    printf("\n\tTroco em moedas de R$0,50: %d", moeda50);
    printf("\n\tTroco em moedas de R$0,25: %d", moeda25);
    printf("\n\tTroco em moedas de R$0,10: %d", moeda10);
    printf("\n\tTroco em moedas de R$0,05: %d", moeda5);
    printf("\n\tTroco em moedas de R$0,01: %d", moeda1);

}

//função que chama a inserção de valores pelo usuário
double dinheiro() {
    double total;
    double recebido;

    printf("CAIXA LIVRE - UTILIZE PONTO AO INVÉS DE VÍRGULA PARA OS VALORES!\n\nValor total da compra:\nR$:");
    scanf("%lf", &total);
    fflush(stdin);
    printf("\nValor em dinheiro recebido:\nR$:");
    scanf("%lf", &recebido);

    while (total > recebido) {
        printf("\nValor em dinheiro não e suficiente.\nVeriquei/Informe cliente"
                " e entre com novo valor.\nR$:");
        scanf("%lf", &recebido);
    }
    return (recebido - total);
}

int main() {

    //chama a função para digitar os valores
    double troco;
    int qtdeNotas = 0;
    troco = dinheiro();
    printf("\n\n\tValor do troco: R$%0.2lf\n\t-----------------------\n", troco);

    contaTroco(troco);

    return 0;
}


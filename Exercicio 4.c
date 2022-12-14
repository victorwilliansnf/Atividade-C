//
// Created by victo on 13/12/2022.
//
#include <stdio.h>
int main(){
    int conta, porcentagemgarcom, totalpagar;

    printf("Insira o valor da conta: R$\n");
    scanf("%d", &conta);

    printf("Insira a porcentagem do garcom: \n%");
    scanf("%d", &porcentagemgarcom);

    totalpagar = ((conta/100)*porcentagemgarcom) + conta;
    printf("O valor total a pagar da conta: R$%d\n", totalpagar);
}
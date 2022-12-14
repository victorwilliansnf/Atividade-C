//
// Created by victo on 13/12/2022.
//
#include <stdio.h>
int main(){
    float salario, reajuste, novosalario;

    printf("Digite seu salario atual: R$\n");
    scanf("%f", &salario);

    reajuste = ((salario/100)*10)+salario;
    novosalario = reajuste;
    printf("Seu novo salario com reajuste de 10%: R$%.2f\n", novosalario);
}
//
// Created by victo on 13/12/2022.
//
#include <stdio.h>
int main (){

    int base, altura, area;

    printf("Digite a base do triangulo:\n");
    scanf("%d", &base);

    printf("Digite a altura do triangulo:\n");
    scanf("%d", &altura);

    area = (base*altura)/2;
    printf("A area do triangulo: %d\n", area);
}
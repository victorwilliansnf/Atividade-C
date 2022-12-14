//
// Created by victo on 13/12/2022.
//
#include <stdio.h>
int main (){

    char nome[30];
    int idade, sexo;

    printf("Digite seu nome:\n");
    scanf("%s", &nome);

    printf("Digite sua idade:\n");
    scanf("%d", &idade);

    printf("Para informar seu sexo digite 1 para mulher ou digite 2 para homem: \n");
    scanf("%d", &sexo);
    int mulher = (sexo == 1);
    int homem = (sexo == 2);

    if(mulher){
        printf("Seu nome: %s\n", nome);
        gets(nome);
        printf("Sua idade: %d\n", idade);
        printf("Seu sexo: Feminino");
    }

    if(homem){
        printf("Seu nome: %s\n", nome);
        gets(nome);
        printf("Sua idade: %d\n", idade);
        printf("Seu sexo: Masculino");
    }



}


#include <stdio.h>
#include <string.h>

#define NUM_CARROS 5

// Estrutura para representar um carro
struct Carro {
    char modelo[50];
    float consumo;  // km/l
};

// Função que preenche um carro com dados informados pelo usuário
void preencherCarro(struct Carro* carro) {
    printf("Digite o modelo do carro: ");
    fgets(carro->modelo, 50, stdin);
    carro->modelo[strcspn(carro->modelo, "\n")] = '\0';  // Remove o caractere '\n' do final da string
    printf("Digite o consumo do carro (km/l): ");
    scanf("%f", &carro->consumo);
    getchar();  // Consome o caractere '\n' deixado pelo scanf
}

int main() {
    struct Carro carros[NUM_CARROS];
    float litrosPorMil[NUM_CARROS];

    // Preenche os dados dos carros
    for (int i = 0; i < NUM_CARROS; i++) {
        printf("Digite os dados do carro %d:\n", i + 1);
        preencherCarro(&carros[i]);
    }

    // Encontra o carro mais econômico
    struct Carro maisEconomico = carros[0];
    for (int i = 1; i < NUM_CARROS; i++) {
        if (carros[i].consumo > maisEconomico.consumo) {
            maisEconomico = carros[i];
        }
    }
    printf("\nO carro mais econômico é o %s.\n", maisEconomico.modelo);

    // Calcula quantos litros cada carro consome para percorrer 1000 km
    for (int i = 0; i < NUM_CARROS; i++) {
        litrosPorMil[i] = 1000.0 / carros[i].consumo;
    }

    // Imprime os resultados
    printf("\nConsumo para percorrer 1000 km:\n");
    for (int i = 0; i < NUM_CARROS; i++) {
        printf("%s: %.2f litros\n", carros[i].modelo, litrosPorMil[i]);
    }

    return 0;
}

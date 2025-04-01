#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato, você deve criar cartas representando cidades
// utilizando scanf para entrada de dados e printf para exibir as informações.

#define MAX_CIDADES 3

int main() {
    char nome[MAX_CIDADES][50];
    int populacao[MAX_CIDADES];
    float area[MAX_CIDADES], pib[MAX_CIDADES];

    // Entrada de dados
    for (int i = 0; i < MAX_CIDADES; i++) {
        printf("Cadastro da cidade %d:\n", i + 1);
        printf("Nome: ");
        scanf(" %49[^"]", nome[i]);
        printf("População: ");
        scanf("%d", &populacao[i]);
        printf("Área (km²): ");
        scanf("%f", &area[i]);
        printf("PIB per capita: ");
        scanf("%f", &pib[i]);
    }

    // Exibição dos dados
    printf("\nCartas cadastradas:\n");
    for (int i = 0; i < MAX_CIDADES; i++) {
        printf("\nCidade: %s\n", nome[i]);
        printf("População: %d habitantes\n", populacao[i]);
        printf("Área: %.2f km²\n", area[i]);
        printf("PIB per capita: R$ %.2f\n", pib[i]);
    }

    return 0;
}

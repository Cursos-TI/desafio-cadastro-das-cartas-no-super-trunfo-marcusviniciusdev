#include <stdio.h>

int main() {
    // Declaração de variáveis para a primeira carta
    char estado1, codigo1[4], nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidade1;

    // Declaração de variáveis para a segunda carta
    char estado2, codigo2[4], nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidade2;

    // Entrada de dados para a primeira carta
    printf("Insira os dados da primeira carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf(" %s", codigo1);
    getchar();
    printf("Nome da Cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    printf("População: ");
    scanf(" %d", &populacao1);
    printf("Área (em km²): ");
    scanf(" %f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos1);
    densidade1 = populacao1 / area1;

    // Entrada de dados para a segunda carta
    printf("\nInsira os dados da segunda carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: B02): ");
    scanf(" %s", codigo2);
    getchar();
    printf("Nome da Cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    printf("População: ");
    scanf(" %d", &populacao2);
    printf("Área (em km²): ");
    scanf(" %f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos2);
    densidade2 = populacao2 / area2;

    // Menu de comparação
    int escolha;
    printf("\nEscolha o atributo para comparar:\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &escolha);

    // Exibição do resultado
    printf("\nComparação entre %s e %s", nomeCidade1, nomeCidade2);

    switch (escolha) {
        case 1:
            printf("\nAtributo: População\n");
            printf("%s: %d\n%s: %d\n", nomeCidade1, populacao1, nomeCidade2, populacao2);
            if (populacao1 > populacao2) printf("Vencedor: %s", nomeCidade1);
            else if (populacao2 > populacao1) printf("Vencedor: %s", nomeCidade2);
            else printf("Empate!");
            break;
        case 2:
            printf("\nAtributo: Área\n");
            printf("%s: %.2f km²\n%s: %.2f km²\n", nomeCidade1, area1, nomeCidade2, area2);
            if (area1 > area2) printf("Vencedor: %s", nomeCidade1);
            else if (area2 > area1) printf("Vencedor: %s", nomeCidade2);
            else printf("Empate!");
            break;
        case 3:
            printf("\nAtributo: PIB\n");
            printf("%s: %.2f bilhões\n%s: %.2f bilhões\n", nomeCidade1, pib1, nomeCidade2, pib2);
            if (pib1 > pib2) printf("Vencedor: %s", nomeCidade1);
            else if (pib2 > pib1) printf("Vencedor: %s", nomeCidade2);
            else printf("Empate!");
            break;
        case 4:
            printf("\nAtributo: Pontos Turísticos\n");
            printf("%s: %d\n%s: %d\n", nomeCidade1, pontosTuristicos1, nomeCidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) printf("Vencedor: %s", nomeCidade1);
            else if (pontosTuristicos2 > pontosTuristicos1) printf("Vencedor: %s", nomeCidade2);
            else printf("Empate!");
            break;
        case 5:
            printf("\nAtributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n%s: %.2f hab/km²\n", nomeCidade1, densidade1, nomeCidade2, densidade2);
            if (densidade1 < densidade2) printf("Vencedor: %s", nomeCidade1);
            else if (densidade2 < densidade1) printf("Vencedor: %s", nomeCidade2);
            else printf("Empate!");
            break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}

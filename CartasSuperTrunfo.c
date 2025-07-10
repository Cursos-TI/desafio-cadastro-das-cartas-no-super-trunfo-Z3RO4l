#include <stdio.h>
#include <string.h>

int main() {
    // Declaração das variáveis da carta A01
    char Estado1[40];
    char Codigo1[10];
    char Cidadea[50];
    int Populacao1;
    int  Ponto_Turistico1;
    float Area1;
    float PIB1;
    float Densidade_Populacional1;
    float PIB_Percapita1;

    // Declaração das variáveis da carta B02
    char Estado2[40];
    char Codigo2[10];
    char Cidadeb[50];
    int Populacao2;
    int Pontos_Turisticos2;
    float Area2;
    float PIB2;
    float Densidade_Populacional2;
    float PIB_Percapita2;

    int opcao;

    // Entrada de dados da Carta A01
    printf("========== Cadastro da Carta 01 =============\n");
    printf("Estado: ");
    scanf(" %s", Estado1);
    printf("Código da carta: ");
    scanf(" %s", Codigo1);
    printf("Nome da cidade: ");
    scanf(" %s", Cidadea);
    printf("População: ");
    scanf("%d", &Populacao1);
    printf("Área (km2): ");
    scanf("%f", &Area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &PIB1);
    printf("Pontos turísticos: ");
    scanf("%d", &Ponto_Turistico1);

    Densidade_Populacional1 = Populacao1 / Area1;
    PIB_Percapita1 = PIB1 / Populacao1;

    // Entrada de dados da Carta B02
    printf("\n========== Cadastro da Carta 02 =============\n");
    printf("Estado: ");
    scanf(" %s", Estado2);
    printf("Código da carta: ");
    scanf(" %s", Codigo2);
    printf("Nome da cidade: ");
    scanf(" %s", Cidadeb);
    printf("População: ");
    scanf("%d", &Populacao2);
    printf("Área (km2): ");
    scanf("%f", &Area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &PIB2);
    printf("Pontos turísticos: ");
    scanf("%d", &Pontos_Turisticos2);

    Densidade_Populacional2 = Populacao2 / Area2;
    PIB_Percapita2 = PIB2 / Populacao2;

    // Menu de seleção
    printf("\n========= MENU DE COMPARAÇÃO =========\n");
    printf("Escolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB Per Capita\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    printf("\nComparando...\n %s vs %s\n", Estado1, Estado2);

    switch (opcao) {
        case 1:
            printf("População:\n %d vs %d\n", Populacao1, Populacao2);
            if (Populacao1 > Populacao2)
                printf("Vencedor: %s\n", Estado1);
            else if (Populacao2 > Populacao1)
                printf("Vencedor: %s\n", Estado2);
            else
                printf("Empate!\n");
            break;
        case 2:
            printf("Área:\n %.2f vs %.2f\n", Area1, Area2);
            if (Area1 > Area2)
                printf("Vencedor: %s\n", Estado1);
            else if (Area2 > Area1)
                printf("Vencedor: %s\n", Estado2);
            else
                printf("Empate!\n");
            break;
        case 3:
            printf("PIB:\n %.2f vs %.2f\n", PIB1, PIB2);
            if (PIB1 > PIB2)
                printf("Vencedor: %s\n", Estado1);
            else if (PIB2 > PIB1)
                printf("Vencedor: %s\n", Estado2);
            else
                printf("Empate!\n");
            break;
        case 4:
            printf("Pontos Turísticos:\n %d vs %d\n", Ponto_Turistico1, Pontos_Turisticos2);
            if (Ponto_Turistico1 > Pontos_Turisticos2)
                printf("Vencedor: %s\n", Estado1);
            else if (Pontos_Turisticos2 > Ponto_Turistico1)
                printf("Vencedor: %s\n", Estado2);
            else
                printf("Empate!\n");
            break;
        case 5:
            printf("Densidade Demográfica:\n %.2f vs %.2f\n", Densidade_Populacional1, Densidade_Populacional2);
            if (Densidade_Populacional1 < Densidade_Populacional2)
                printf("Vencedor: %s\n", Estado1);
            else if (Densidade_Populacional2 < Densidade_Populacional1)
                printf("Vencedor: %s\n", Estado2);
            else
                printf("Empate!\n");
            break;
        case 6:
            printf("PIB Per Capita:\n %.6f vs %.6f\n", PIB_Percapita1, PIB_Percapita2);
            if (PIB_Percapita1 > PIB_Percapita2)
                printf("Vencedor: %s\n", Estado1);
            else if (PIB_Percapita2 > PIB_Percapita1)
                printf("Vencedor: %s\n", Estado2);
            else
                printf("Empate!\n");
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}

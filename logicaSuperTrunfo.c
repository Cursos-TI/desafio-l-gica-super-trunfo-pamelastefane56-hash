#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
// --- 1. Cadastro e Definição das Cartas ---
// Carta 1: São Paulo (SP)
char estado1[3] = "SP";
char codigo1[5] = "SP01";
char nomeCidade1[50] = "Sao Paulo";
int populacao1 = 12300000;
float area1 = 1521.11;
float pib1 = 800.0; // Em bilhões
int pontosTuristicos1 = 50;
                                        
// Carta 2: Rio de Janeiro (RJ)
char estado2[3] = "RJ";
char codigo2[5] = "RJ01";
char nomeCidade2[50] = "Rio de Janeiro";
int populacao2 = 6000000;
float area2 = 1200.25;
float pib2 = 350.0; // Em bilhões
int pontosTuristicos2 = 45;
// --- 2. Cálculos das Propriedades ---
// Densidade Populacional: População / Área
float densidadePop1 = (float)populacao1 / area1;
float densidadePop2 = (float)populacao2 / area2;

// PIB per capita: PIB / População
// Multiplicado por 10^9 porque a unidade está em bilhões
float pibPerCapita1 = (pib1 * 1000000000.0) / (float)populacao1;
 float pibPerCapita2 = (pib2 * 1000000000.0) / (float)populacao2;

// --- 3. Lógica de Comparação ---
// Escolha do atributo: População (O maior valor vence)
int atributoCarta1 = populacao1;
int atributoCarta2 = populacao2;

// Exibição dos dados iniciais
printf("Comparação de cartas (Atributo: Populacao):\n");
printf("----------------------------------------\n");
printf("Carta 1 - %s (%s): %d\n", nomeCidade1, estado1, atributoCarta1);
printf("Carta 2 - %s (%s): %d\n", nomeCidade2, estado2, atributoCarta2);
printf("----------------------------------------\n");

// Estrutura de decisão para determinar a vencedora
if (atributoCarta1 > atributoCarta2) {
printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
} else if (atributoCarta2 > atributoCarta1) {
printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
} else {
printf("Resultado: Empate!\n");
}

    return 0;
}

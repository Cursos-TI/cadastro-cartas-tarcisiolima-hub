#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char Estado1;
  char Codigo1[4];
  char Cidade1[21];
  int Populacao1;
  float Area1;
  float PIB1;
  int PontosTuristicos1;

  char Estado2;
  char Codigo2[4];
  char Cidade2[21];
  int Populacao2;
  float Area2;
  float PIB2;
  int PontosTuristicos2;

  // Área para entrada de dados
  printf ("Digite abaixo os dados da Carta 1\n");
  printf ("Estado: ");
  scanf (" %c", &Estado1);
  printf ("Código: ");
  scanf ("%s", &Codigo1);
  printf ("Nome da Cidade: ");
  scanf (" %[^\n]", &Cidade1);
  printf ("População: ");
  scanf ("%d", &Populacao1);
  printf ("Área: ");
  scanf ("%f", &Area1);
  printf ("PIB: ");
  scanf ("%f", &PIB1);
  printf ("Número de Pontos Turísticos: ");
  scanf ("%d", &PontosTuristicos1);
  printf ("\n");

  printf ("Digite agora os dados da Carta 2\n");
  printf ("Estado: ");
  scanf (" %c", &Estado2);
  printf ("Código: ");
  scanf ("%s", &Codigo2);
  printf ("Nome da Cidade: ");
  scanf (" %[^\n]", &Cidade2);
  printf ("População: ");
  scanf ("%d", &Populacao2);
  printf ("Área: ");
  scanf ("%f", &Area2);
  printf ("PIB: ");
  scanf ("%f", &PIB2);
  printf ("Número de Pontos Turísticos: ");
  scanf ("%d", &PontosTuristicos2);

  // Tema 2 - Calculando Densidade Populacional e PIB per Capita
  // Objetivo: No nível aventureiro você deve calcular e exibir duas novas propriedades importantes para cada cidade: a densidade populacional e o PIB per capita.

  // Área para definição das variáveis para armazenar as novas propriedades das cidades
  float DensidadePopulacional1, DensidadePopulacional2;
  float PIBperCapita1, PIBperCapita2;
  
  // Área para cálculo de dados
  DensidadePopulacional1 = Populacao1 / Area1;
  DensidadePopulacional2 = Populacao2 / Area2;
  PIBperCapita1 = (PIB1 / Populacao1) * 1000000000;
  PIBperCapita2 = (PIB2 / Populacao2) * 1000000000;

  // Área para exibição dos dados das cidades
  printf ("\n");
  printf ("Obrigado, confira abaixo os dados das cartas digitadas:\n");
  printf ("\n");
  printf ("Carta 1:\n");
  printf ("Estado: %c\n", Estado1);
  printf ("Código: %s\n", Codigo1);
  printf ("Nome da Cidade: %s\n", Cidade1);
  printf ("População: %d\n", Populacao1);
  printf ("Área: %.2f km²\n", Area1);
  printf ("PIB: %.2f bilhões de reais\n", PIB1);
  printf ("Número de Pontos Turísticos: %d\n", PontosTuristicos1);
  printf ("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional1);
  printf ("PIB per Capita: %.2f reais\n", PIBperCapita1);

  printf ("\n");
  printf ("Carta 2:\n");
  printf ("Estado: %c\n", Estado2);
  printf ("Código: %s\n", Codigo2);
  printf ("Nome da Cidade: %s\n", Cidade2);
  printf ("População: %d\n", Populacao2);
  printf ("Área: %.2f km²\n", Area2);
  printf ("PIB: %.2f bilhões de reais\n", PIB2);
  printf ("Número de Pontos Turísticos: %d\n", PontosTuristicos2);
  printf ("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional2);
  printf ("PIB per Capita: %.2f reais\n", PIBperCapita2);
  printf ("\n");

  return 0;
} 

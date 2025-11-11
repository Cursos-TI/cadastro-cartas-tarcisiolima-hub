#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char Estado1;
  char Codigo1[4];
  char Cidade1[21];
  unsigned long int Populacao1;
  float Area1;
  float PIB1;
  int PontosTuristicos1;

  char Estado2;
  char Codigo2[4];
  char Cidade2[21];
  unsigned long int Populacao2;
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
  scanf ("%lu", &Populacao1);
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
  scanf ("%lu", &Populacao2);
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
  printf ("População: %lu\n", Populacao1);
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
  printf ("População: %lu\n", Populacao2);
  printf ("Área: %.2f km²\n", Area2);
  printf ("PIB: %.2f bilhões de reais\n", PIB2);
  printf ("Número de Pontos Turísticos: %d\n", PontosTuristicos2);
  printf ("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional2);
  printf ("PIB per Capita: %.2f reais\n", PIBperCapita2);
  printf ("\n");

  // Tema 3 - Batalha de Cartas no Super Trunfo
  // Objetivo: No nível avançado, você implementará a lógica de comparação entre duas cartas do Super Trunfo, determinando a vencedora de cada atributo e introduzindo o conceito de "Super Poder".

  // Área para definição das variáveis para armazenar o Super Poder
  float SuperPoder1 = (float) Populacao1 + Area1 + PIB1 + PontosTuristicos1 + PIBperCapita1 + (1 / DensidadePopulacional1);
  float SuperPoder2 = (float) Populacao2 + Area2 + PIB2 + PontosTuristicos2 + PIBperCapita2 + (1 / DensidadePopulacional2);

  // Área para comparar as cartas 
  int ResultadoPopulacao = Populacao1 > Populacao2;
  int ResultadoArea = Area1 > Area2;
  int ResultadoPIB = PIB1 > PIB2;
  int ResultadoPontosTur = PontosTuristicos1 > PontosTuristicos2;
  int ResultadoDensidadePop = DensidadePopulacional1 < DensidadePopulacional2;
  int ResultadoPIBperCapita = PIBperCapita1 > PIBperCapita2;
  int ResultadoSuperPoder = SuperPoder1 > SuperPoder2;
  
  // Área parae exibir os resultados
  printf ("Comparação de Cartas: \n");
  //Se resultado = 1, Carta 1 venceu.
  //Se resultado = 0, Carta 2 venceu.
  printf ("\n");
  
  if (ResultadoPopulacao == 1) {
    printf ("População: Carta 1 (%s) venceu\n", Cidade1);
  } else {printf ("População: Carta 2 (%s) venceu\n", Cidade2);}
  
  if (ResultadoArea == 1) {
    printf ("Área: Carta 1 (%s) venceu\n", Cidade1);
  } else {printf ("Área: Carta 2 (%s) venceu\n", Cidade2);}

  if (ResultadoPIB == 1) {
    printf ("PIB: Carta 1 (%s) venceu\n", Cidade1);
  } else {printf ("PIB: Carta 2 (%s) venceu\n", Cidade2);}

  if (ResultadoPontosTur == 1) {
    printf ("Pontos Turísticos: Carta 1 (%s) venceu\n", Cidade1);
  } else {printf ("Pontos Turísticos: Carta 2 (%s) venceu\n", Cidade2);}

  if (ResultadoDensidadePop == 1) {
    printf ("Densidade Populacional: Carta 1 (%s) venceu\n", Cidade1);
  } else {printf ("Densidade Populacional: Carta 2 (%s) venceu\n", Cidade2);}

  if (ResultadoPIBperCapita == 1) {
    printf ("PIB per Capita: Carta 1 (%s) venceu\n", Cidade1);
  } else {printf ("PIB per Capita: Carta 2 (%s) venceu\n", Cidade2);}

  if (ResultadoSuperPoder == 1) {
    printf ("Super Poder: Carta 1 (%s) venceu\n", Cidade1);
  } else {printf ("Super Poder: Carta 2 (%s) venceu\n", Cidade2);}

  printf ("\n");

  return 0;
} 

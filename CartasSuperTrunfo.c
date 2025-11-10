#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char Estado1;
  char Código1[3];
  char Cidade1[20];
  int População1;
  float Área1;
  float PIB1;
  int PontosTurísticos1;

  char Estado2;
  char Código2[3];
  char Cidade2[20];
  int População2;
  float Área2;
  float PIB2;
  int PontosTurísticos2;

  // Área para entrada de dados
  printf ("Digite abaixo os dados da Carta 1\n");
  printf ("Estado: ");
  scanf ( "%c", &Estado1);
  printf ("Código: ");
  scanf ("%s", &Código1);
  printf ("Nome da Cidade: ");
  scanf ("%s", &Cidade1);
  printf ("População: ");
  scanf ("%d", &População1);
  printf ("Área: ");
  scanf ("%.2f", &Área1);
  printf ("PIB: ");
  scanf ("%d", &PIB1);
  printf ("Número de Pontos Turísticos: ");
  scanf ("%d", &PontosTurísticos1);

  printf ("Digite agora os dados da Carta 2\n");
  printf ("Estado: ");
  scanf ( "%c", &Estado2);
  printf ("Código: ");
  scanf ("%s", &Código2);
  printf ("Nome da Cidade: ");
  scanf ("%s", &Cidade2);
  printf ("População: ");
  scanf ("%d", &População2);
  printf ("Área: ");
  scanf ("%.2f", &Área2);
  printf ("PIB: ");
  scanf ("%d", &PIB2);
  printf ("Número de Pontos Turísticos: ");
  scanf ("%d", &PontosTurísticos2);

  // Área para exibição dos dados da cidade
  printf ("Obrigado, confira abaixo os dados das cartas digitadas:\n");
  printf ("\n");
  printf ("Carta 1:\n");
  printf ("Estado: %c\n", Estado1);
  printf ("Código: %s\n", Código1);
  printf ("Nome da Cidade: %s\n", Cidade1);
  printf ("População: %d\n", População1);
  printf ("Área: %.2f km²\n", Área1);
  printf ("PIB: %.2f bilhões de reais\n", PIB1);
  printf ("Número de Pontos Turísticos: %d\n", PontosTurísticos1);
  
  printf ("\n");
  printf ("Carta 2:\n");
  printf ("Estado: %c\n", Estado2);
  printf ("Código: %s\n", Código2);
  printf ("Nome da Cidade: %s\n", Cidade2);
  printf ("População: %d\n", População2);
  printf ("Área: %.2f km²\n", Área2);
  printf ("PIB: %.2f bilhões de reais\n", PIB2);
  printf ("Número de Pontos Turísticos: %d\n", PontosTurísticos2);
  printf ("\n");

  return 0;
} 

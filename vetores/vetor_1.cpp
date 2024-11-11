#include <iostream>
#include <stdio.h>

// Programação funcional: Utilizar funções para programar
// Progamação Estruturada: Código Baseado em estruturas de dados

// Vetores: Uma estrutura de dados indexada

// Tipos Primitivos
int inteiro;    // 4 bytes
char caractere; // 1 byte
double d;       // 8 bytes
float f;        // 6 bytes

int main() {
  int n = 10;

  // <tipo_do_vetor> <nome> [<tamanho>];
  int primeiroVetor[n] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  primeiroVetor[3] = 53;

  for (int i = 0; i < n; i++) {
    std::cout << "Indice " << i << ": " << primeiroVetor[i] << std::endl;
  }

  return 0;
}
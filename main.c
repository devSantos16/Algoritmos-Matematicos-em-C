#include <stdio.h>
// 1. Faça um algoritmo que faz a multiplicação entre 2 números sem utilizar o
// operador de multiplicação (*) ou qualquer outra função (Utilizar Soma).

// 2. Faça um algoritmo que faz a potência a partir da base e expoente sem
// utilizar o operador de multiplicação (*) ou qualquer outra função (Utilizar
// Soma).

// 3. Faça um algoritmo que faça o fatorial de um número sem utilizar qualquer
// outra função e sem utilizar recursividade.

// 4. Faça um algoritmo que faz o fatorial de um número sem utilizar o operador
// de multiplicação (*) ou qualquer outra função e sem utilizar recursividade
// (Utilizar Soma).

void multiplicacao(int base, int mult) {
  int i = 0, soma = 0;

  for (i = 0; i < mult; i++) {
    soma += base;
  }
  printf("Multiplicacao %d\n", soma);
}

// 5 ^ 2 = 5 * 5
// 5 ^ 3 = 5 * 5 * 5

// 25 + 25 + 25 + 25 + 25

// 25 + 25

void potenciacao(int base, int exp) {
  int soma = 0, num = base;

  for (int i = 0; i < exp - 1; i++) {
    for (int y = 0; y < base; y++) {
      soma += num;
    }
    num = soma;
    soma = 0;
  }
  printf("Exponencial: %d\n", num);
}

void fatorialComMultiplicacao(int base) {
  int num = base - 1;
  int soma = 0;

  for (int i = 0; i < base; i++) {
    if (num == 0) {
      continue;
    }
    base = base * num;
    num--;
  }
  printf("Fatorial: %d\n", base);
}

void fatorialSemMultiplicacao(int base) {
  int soma = 0;
  int num = base - 1;

  for (int i = 0; i < base; i++) {
    // 4 * 3 * 2 * 1
    for (int y = 0; y < num; y++) {
      soma += base;
    }

    num--;
  }

  printf("Fatorial:%d\n", soma);
}

int main(void) {
  // Atividade 1
  multiplicacao(10, 5);
  // Atividade 2
  potenciacao(5, 4);
  // Atividade 3
  fatorialComMultiplicacao(4);
  // Atividade 4
  fatorialSemMultiplicacao(4);
}
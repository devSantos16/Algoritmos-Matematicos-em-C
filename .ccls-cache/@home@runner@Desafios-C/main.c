#include <stdio.h>

void multiplicacao(int base, int mult) {
  int i = 0, soma = 0;

  for (i = 0; i < mult; i++) {
    soma += base;
  }
  printf("Multiplicacao %d\n", soma);
}

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
#include <stdio.h>
#include "funcoes.h"

int fatorial(int num) {
    int resultado = 1;

    for (int i = 1; i <= num; i++) {
        resultado *= i;
    }

    return resultado;
}

void combinacao(int r, int n) {
    if (r >= n) {
        int subtracao_r_n = (r - n);
        int resultado = fatorial(r) / (fatorial(n) * fatorial(subtracao_r_n));
        printf("C(%d,%d) = %d\n", r, n, resultado);
    }
    else {
        printf("Erro: r (%d) nao pode ser menor que n (%d)\n", r, n);
    }
}
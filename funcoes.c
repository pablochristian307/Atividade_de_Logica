#include <stdio.h>
#include "funcoes.h"

int fatorial(int num) {
    if (num < 0) return -1;
    
    int resultado = 1;

    for (int i = 1; i <= num; i++) {
        resultado *= i;
    }

    return resultado;
}

void combinacao(int r, int n) {
    if (r < 0 || n < 0) {
        printf("Erro: Não existe fatorial de número negativo.\n");
    } 
    else if (r >= n) {
        int subtracao_r_n = (r - n);
        int resultado = fatorial(r) / (fatorial(n) * fatorial(subtracao_r_n));
        printf("C(%d,%d) = %d\n", r, n, resultado);
    }
    else {
        printf("Erro: r (%d) não pode ser menor que n (%d)\n", r, n);
    }
}
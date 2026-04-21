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

void combinacao(int n, int r) {
    if (n < 0 || r < 0) {
        printf("Erro: Não existe fatorial de número negativo.\n");
    } 
    else if (n >= r) {
        int subtracao_n_r = (n - r);
        int resultado = fatorial(n) / (fatorial(r) * fatorial(subtracao_n_r));
        printf("C(%d,%d) = %d\n", n, r, resultado);
    }
    else {
        printf("Erro: n (%d) não pode ser menor que r (%d)\n", n, r);
    }
}

int comb(int n, int r) {
    if (r <= n) {
        int sub = (n-r), resultado = fatorial(n) / (fatorial(r) * fatorial(sub));
        return resultado;
    }
    else {
        return -1;
    }
}

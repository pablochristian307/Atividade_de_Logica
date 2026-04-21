#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int main(void) {
    /*int n, r;

    printf("Informe o valor de n: ");
    scanf("%d", &n);
    printf("Informe o valor de r: ");
    scanf("%d", &r);

    if (r <= n) printf("C(%d, %d) = %d\n", n, r, comb(n,r));
    else printf("ERRO: r não pode ser maior que n...\nValor = %d\n", comb(n,r));*/

    printf("C(%d, %d) = %d\n\n", 4, 5, comb(4,5));
    combinacao(4,5);
    
    return 0;
}
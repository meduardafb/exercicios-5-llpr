#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
    int nI, r, i;
    int termos_pa[10];

    printf("Digite um número: \n");
    scanf("%d", &nI);
    printf("Digite a razão: \n");
    scanf("%d", &r);

    termos_pa[0] = nI;
    for (int i = 1; i < 10; i++) {
        termos_pa[i] = termos_pa[i-1] + r;
    }

    printf("Termos: \n");
    for (int i = 0; i < 10; i++) {
        printf("%d \n", termos_pa[i]);
    }

    return 0;
}


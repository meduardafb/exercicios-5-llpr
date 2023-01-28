#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
    int nI, r;
    int t[10];

    printf("Digite um número: \n");
    scanf("%d", &nI);

    printf("Digite a razão: \n");
    scanf("%d", &r);

   
    t[0] = nI;
    for (int i = 1; i < 10; i++) {
        t[i] = t[i-1] * r;
    }

    
    for (int i = 0; i < 10; i++) {
        printf("Termo %d: %d\n", i+1, t[i]);
    }

    return 0;
}


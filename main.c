#include <stdio.h>
int main() {
    int n, i;
    printf("Inserisci un numero intero: ");
    scanf("%d", &n);
    printf("I divisori di %d sono:\n ", n);
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d\n ", i);
        }
    }
    return 0;
}



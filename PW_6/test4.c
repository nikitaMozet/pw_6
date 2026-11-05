#include <stdio.h>
// var = 18
int main(void) {
    printf("Введите сумму:\n");
    float n;
    while (scanf("%f", &n) == 1) {
        if (n<100){ printf("Скидки не будет Исходная сумма: %.2f", n); }
        else if (n>100 && n<501) { printf("Скидка 5%% Исходная сумма: %.2f", (n * 0.95)); }
        else if (n>500 && n<1001) { printf("Скидка 10%% Исходная сумма: %.2f", (n * 0.90)); }
        else if (n>1000) { printf("Скидка 15%% Исходная сумма: %.2f", (n * 0.85)); }
        printf("\n");
    }

    return 0;
}
//Y
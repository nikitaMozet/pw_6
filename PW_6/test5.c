#include <stdio.h>
#include <math.h>
// var = 22
int main(void) {
    int i;
    char c;
    double r, n;

    while (1) {
        printf("1. Модуль числа\n");
        printf("2. Знак числа\n");
        printf("3. Округление вверх\n");
        printf("4. Округление вниз\n");
        printf("5. Выход\n");
        printf("Выберите пункт и введите число =>\n");
        
        
        if ((scanf("%d %lf", &i, &n)) != 2) {
            while((getchar()) != '\n');
            printf("Неверный ввод\n");
            printf("\n");
            continue;
        }

        switch (i) {

            case 1:
                r = fabs(n);
                printf("\n");
                printf("Модуль числа равен: %lf\n", r);
                printf("\n");
                break;

            case 2:
                if (n > 0) { r = 1; }
                else if (n < 0) { r = -1; }
                else if (n == 0) { r = 0; }
                printf("\n");
                printf("Знак числа: %.0lf\n", r);
                printf("\n");
                break;

            case 3:
                r = ceil(n);
                printf("\n");
                printf("Результат округления вверх: %lf\n", r);
                printf("\n");
                break;

            case 4:
                r = floor(n);
                printf("\n");
                printf("Результат округления вниз: %lf\n", r);
                printf("\n");
                break;

            case 5:
                printf("Завершение программы!\n");
                return 0;
        }
    }


    return 0;
}
//Y
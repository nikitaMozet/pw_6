#include <stdio.h>
// var = 12

int main(void) {
    int n, i, j, sum1, sum2;
    printf("Введите числа:\n");
    while (scanf("%d", &n) == 1 && n != 0) {
        if (9 < n && n < 100) {
            sum2+=n;
            j++;
            if ((n%10) == (n/10)){
                sum1+=n;
                i++;
            }

            
        }
    }

    float sr1 = (float)sum1/i;
    float sr2 = (float)sum2/(j-i);

    printf("Числа удовлетворяющие первой группе: %d  |  Срзнач: %f\nЧисла удовлетворяющие второй группе: %d  |  Срзнач: %f\n", i, sr1,(j-i), sr2);

    return 0;
}
//Y
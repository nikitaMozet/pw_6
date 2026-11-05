#include <stdio.h>
#include <ctype.h>
// var - 18

int main(void) {
    int k_o = 0, k_n = 0;
    printf("Введите символы:");
    char c = getchar();
    while(c != '#') {
        
        if (c == 'o') {
            k_o++;
        }
        else if(c == '0') {
            k_n++;
        }
        
        c = getchar();
    }

    if (k_o == 0 && k_n == 0){ printf("Не найдены нужные символы");}
    else {
        printf("Найдено \"o\" символов: %d\n", k_o);
        printf("Найдено \"0\" символов: %d\n", k_n);
    }


    return 0;
}
//Y
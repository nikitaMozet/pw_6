#include <stdio.h>
#include <wchar.h>
#include <locale.h>
// var = 6

int main(void) {
    setlocale(LC_ALL, "");
    int a = 0, e = 0;
    printf("Введите символы:\n");
    wchar_t c = getwchar();
    while (c != L'#') {

        if (c == L'a') {
            a++;
        }
        else if(c == L'e') {
            e++;
        }

        c = getwchar();
    }

    if (a == 0 && e == 0){ printf("Не найдены нужные символы");}
    else {
        printf("Найдено \"a\" символов: %d\n", a);
        printf("Найдено \"e\" символов: %d\n", e);
    }


    return 0;
}
//Y
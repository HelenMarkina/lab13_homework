#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

void func();

int main() {
    setlocale(LC_ALL, "");

    func();    

    return 0;
}

void func() {
    char str[200];

    printf("Введите строку: ");
    fgets(str, 200, stdin);

    printf("Слова на 'a': ");

    int found = 0;
    int i = 0;

    while (str[i] != '\0') {
        if ((i == 0 || str[i - 1] == ' ') && (str[i] == 'a' || str[i] == 'A')) {
            found = 1;

            while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
                printf("%c", str[i]);
                i++;
            }
            printf(" ");
        }
        i++;
    }

    if (found == 0) {
        printf("нет");
    }
}
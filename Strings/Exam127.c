#include <stdio.h>
#include <string.h>
#include <locale.h>

#define maxLength 100

void reverseWord(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

void reverseWords(char *str) {
    char *word_begin = str;
    char *temp = str;

    while (*temp) {
        temp++;
        if (*temp == '\0' || *temp == ' ') {
            if (temp - word_begin > 4) {
                reverseWord(word_begin, temp - 1);
            }
            word_begin = temp + 1;
        }
    }
}

int main() {

    setlocale(LC_ALL, "Rus");
    char str[maxLength];

    printf("Введите строку: ");
    fgets(str, maxLength, stdin);
    str[strcspn(str, "\n")] = 0;  // Удаление символа новой строки

    printf("Исходная строка: %s\n", str);

    reverseWords(str);

    printf("Преобразованная строка: %s\n", str);

    return 0;
}

#include <stdio.h>
#include <string.h>

void removeDuplicates(char* str) {
    if (str == NULL)
        return;

    int len = strlen(str);
    if (len < 2)
        return;

    int j = 0;

    for (int i = 1; i < len; i++) {
        if (str[i] != str[j]) {
            j++;
            str[j] = str[i]; // замена индекса
        }
    }

    str[j+1] = '\0'; // добавление символа окончания строки
}

int main() {
    char str[] = "AAA BBB AAA ";
    removeDuplicates(str);
    printf("%s", str);
    return 0;
}
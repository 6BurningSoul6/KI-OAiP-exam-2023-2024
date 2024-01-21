#include <stdio.h>
void swap(char* x, char* y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}
void generatePermutations(char* digits, int start, int end) {
    if (start == end) {
        printf("%s\n", digits);
        return;
    }
    for (int i = start; i <= end; i++) {
        swap((digits + start), (digits + i));
        generatePermutations(digits, start + 1, end);
        swap((digits + start), (digits + i)); // backtrack
    }
}
void printAllPermutations(int n) {
    char digits[11]; // Assuming the number has a maximum of 10 digits
    sprintf(digits, "%d", n);
    int numDigits = 0;
    for (int i = 0; digits[i] != '\0'; i++) {
        numDigits++;
    }
    generatePermutations(digits, 0, numDigits - 1);
}
int main() {
    int n;
    scanf("%d", &n);
    printAllPermutations(n);
    return 0;
}
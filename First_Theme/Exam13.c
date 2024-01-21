#include <stdio.h>
int main() {
    int r;
    scanf("%d", &r);
    int period = 0, flag = 0;
    int a = 0, b = 1, c = 0 ;
    for (int i = 0; flag != 1; i++){
        a = b;
        b = c;
        c = a + b;
        if (b % r == 0 && c % r == 1  && period >= 2){
            flag = 1;
        }
        else
            period++;


    }
    printf("%d: %d\n", r, period);
    return 0;
}

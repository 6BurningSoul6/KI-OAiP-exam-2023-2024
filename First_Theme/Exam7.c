#include <stdio.h>
int main() {
    int n, degree = 1, num, flag;
    scanf("%d", &n);
    for (int i = 1; i < n; i++){
        flag = 1;
        num = i;
        while(degree < i)
            degree *= 3;
        printf("%d = ", i);
        for (int r = degree; r >= 1; r /= 3){
            for (int k = 2; num!= 0 && k > 0; k--){
                if(num - k * r >= 0){
                    printf("%d",k);
                    num -= k*r;
                    flag = 1;
                    break;
                }
            }
            if (flag == 0){
                printf("%d", 0);
            }
            flag = 0;


        }
        printf("\n");
    }
    return 0;
}

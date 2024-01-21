#include <stdio.h>
int main() {
    int N;
    int temp;
    int array[6][6] = {{1,2,3,4,5,6},
                       {6,5,4,3,2,1,},
                       {3,4,6,2,5,34,},
                       {5,7,9,3,5,2,},
                       {4,6,2,3,5,5},
                       {7,4,2,5,7,3}};
    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 6; j++){
            printf("%3.d", array[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int j = 0;j < 4;j++){
        for (int i = 0; i < 3; i+=2){
            if ((array[i][i] + array[i + 1][i + 1]) < (array[i+2][i+2] + array[i + 3][i + 3])){
                printf("%d\n", array[i][i] + array[i + 1][i + 1]);
                int k = 0, l = 0;
                for (int o = 0; o < 3; o++){
                    temp = array[i + l][i + k];
                    array[i + l][i + k] = array[i + 2 + l][i + 2 + k];
                    array[i + 2 + l][i + 2 + k] = temp;
                    l--;
                    k++;
                    if (l<0) {
                        k = 0;
                        l = 0;
                    }
                }
            }
        }
    }
    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 6; j++){
            printf("%3.d", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}

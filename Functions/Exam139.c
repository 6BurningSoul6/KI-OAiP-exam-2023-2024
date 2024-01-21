void duplicates(int arr[], int n) {
    int i, j;
    int pradva;

    for (i = 0; i < n; i++) {
        pradva = 0;
        for (j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                pradva = 1;
                break;
            }
        }

        if (pradva) {
            for (j = 0; j < i; j++) {
                if (arr[i] == arr[j]) {
                    pradva = 0;
                    break;
                }
            }
        }

        if (pradva) {
            printf("%d ", arr[i]);
        }
    }
}


int main() {
    int k;
    printf("Enter massive size ");
    scanf("%d", &k);

    int M[k];
    printf("Enter massive");
    for (int i = 0; i < k; i++) {
        scanf("%d", &M[i]);
    }

    printf("Numbers that more than 1 time:\n");
    duplicates(M, k);

    return 0;
}
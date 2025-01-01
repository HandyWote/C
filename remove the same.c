#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int temp[n];
    int j = 0;
    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;
        for (int k = 0; k < j; k++) {
            if (a[i] == temp[k]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            temp[j++] = a[i];
        }
    }
    for (int i = 0; i < j; i++) {
        a[i] = temp[i];
    }
    for (int i = 0; i < j; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int *l = (int *)malloc(1000 * sizeof(int));
    int c = 0;
    while (n != 1) {
        l[c++] = n;
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
    }
    l[c++] = 1;
    for (int i = c - 1; i >= 0; i--) {
        printf("%d", l[i]);
        if (i > 0) {
            printf(" ");
        }
    }
    printf("\n");
    free(l);
    return 0;
}
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    char letter = 'A';
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c", letter);
            letter++;
            if (letter > 'Z') {
                letter = 'A';
            }
        }
        printf("\n");
    }
    return 0;
}
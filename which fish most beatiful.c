#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int cuteness[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &cuteness[i]);
    }
    int lessCute[n];
    for (int i = 0; i < n; i++) {
        lessCute[i] = 0;
        for (int j = 0; j < i; j++) {
            if (cuteness[j] < cuteness[i]) {
                lessCute[i]++;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", lessCute[i]);
    }
    printf("\n");
    return 0;
}
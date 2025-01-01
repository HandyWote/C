#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int current_sum = 0;
        int end = i + n - k;
        if (end <= n - 1) {
            for (int j = i; j <= end; j++) {
                current_sum += a[j];
            }
            ans = max(ans, current_sum);
        }
    }
    printf("%d\n", ans);
    return 0;
}
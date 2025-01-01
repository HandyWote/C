#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int py[100][100];
    int ans = 1, a = 0, b = n - 1, c = n - 1, d = 0;
    for (int i = 0; i < 2 * n - 1; i++) {
        // 从左到右
        for (int j = a; j <= c; j++) {
            py[a][j] = ans++;
        }
        a++;

        // 从上到下
        for (int j = a; j <= b; j++) {
            py[j][c] = ans++;
        }
        c--;

        // 从右到左
        for (int j = c; j >= d; j--) {
            py[b][j] = ans++;
        }
        b--;

        // 从下到上
        for (int j = b; j >= a; j--) {
            py[j][d] = ans++;
        }
        d++;
    }

    // 打印矩阵
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (py[i][j] > 9) {
                printf(" %d", py[i][j]);
            }
            else {
                printf("  %d", py[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
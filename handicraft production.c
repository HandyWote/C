#include <stdio.h>

int main() {
    int w, x, h, t, ans = 0;
    scanf("%d %d %d %d", &w, &x, &h, &t);
    int sq[21][21][21];
    for (int i = 1; i <= w; i++) {
        for (int j = 1; j <= x; j++) {
            for (int k = 1; k <= h; k++) {
                sq[i][j][k] = 0;
            }
        }
    }

    while (t--) {
        int x1, y1, z1, x2, y2, z2;
        scanf("%d %d %d %d %d %d", &x1, &y1, &z1, &x2, &y2, &z2);
        for (int i = x1; i <= x2; i++) {
            for (int j = y1; j <= y2; j++) {
                for (int k = z1; k <= z2; k++) {
                    sq[i][j][k] = 1;
                }
            }
        }
    }

    for (int i = 1; i <= w; i++) {
        for (int j = 1; j <= x; j++) {
            for (int k = 1; k <= h; k++) {
                if (sq[i][j][k] == 0) ans++;
            }
        }
    }

    printf("%d\n", ans);
    return 0;
}
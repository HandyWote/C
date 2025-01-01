#include <stdio.h>
#include <math.h>

int main() {
    int c, a, b;
    scanf("%d", &c);
    for (a = 1; a <= c; a++) {
        b = (int)sqrt(c * c - a * a);
        if (b * b == c * c - a * a && b > a) {
            printf("%d %d\n", a, b);
            return 0;
        }
    }
    return 0;
}
#include <stdio.h>

int max(int a, int b, int c) {
    if (a > b && a > c) {
        return a;
    } else if (b > a && b > c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int max1 = max(a+b, b, c);
    int max2 = max(a, b, b+c);
    double m = (double)max(a, b, c) / (max1 * max2);
    printf("%.3f\n", m);
    return 0;
}
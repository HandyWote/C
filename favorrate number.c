#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    int lA = (a % 2 == 0 && a > 4 && a <= 12) ? 1 : 0;
    int lUim = (a % 2 == 0 || a > 4 && a <= 12) ? 1 : 0;
    int lB = ((a % 2 == 0 && !(a > 4 || a <= 12)) || (a % 2 != 0 && a > 4 && a <= 12)) ? 1 : 0;
    int lZM = (a % 2 != 0 && (a <= 4 || a > 12)) ? 1 : 0;
    printf("%d %d %d %d\n", lA, lUim, lB, lZM);
    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];
    char a1[100] = {0}, b1[100] = {0};
    scanf("%s %s", a, b);

    int i, j = 0;
    for (i = strlen(a) - 1; i >= 0 && a[i] != '.'; i--) {
        a1[j++] = a[i];
    }
    a1[j] = '\0';

    j = 0;
    for (i = strlen(b) - 1; i >= 0 && b[i] != '.'; i--) {
        b1[j++] = b[i];
    }
    b1[j] = '\0';

    if (strcmp(a1, b1) == 0) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}
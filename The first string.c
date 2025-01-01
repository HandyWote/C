#include <stdio.h>
#include <string.h>

int main() {
    char a[1101];
    scanf("%s", a);
    int TF[256] = {0};

    for (int i = 0; i < strlen(a); i++) {
        TF[a[i]]++;
    }

    int found = 0;

    for (int i = 0; i < strlen(a); i++) {
        if (TF[a[i]] == 1) {
            printf("%c\n", a[i]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("no\n");
    }

    return 0;
}
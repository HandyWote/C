#include <stdio.h>
#include <string.h>
int main() {
    int k, l, r, lucky = 0;
    scanf("%d", &k);
    scanf("%d", &l);
    scanf("%d", &r);
    for (int i = l; i <= r; i++) {
        char si[12];
        char sk[2];
        sprintf(si, "%d", i);
        sprintf(sk, "%d", k);
        if (si[strlen(si) - 1] == sk[0] || i % k == 0) 
        {
            lucky += i;
        }
    }

    printf("%d", lucky);
    return 0;
}
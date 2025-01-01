#include <stdio.h>

int main()
{
    float t,n;
    scanf("%f%f", &t, &n);
    printf("%.3f\n%d\n", t/n, (int)(n*2));
    return 0;
}
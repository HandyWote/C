#include <stdio.h>
int main()
{
    int n,a = 0;
    scanf("%d",&n);
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < i+1; j++)
        {
            a += j;
        }
    }
    printf("%d\n",a);
    return 0;
}
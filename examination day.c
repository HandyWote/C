#include <stdio.h>
int main()
{
    int x,n,a;
    scanf("%d\n%d",&x,&n);
    n %= 7;
    x += n;
    if (x>7)
    {
        x %= 7;
    }    
    printf("%d",x);
    return 0;
}
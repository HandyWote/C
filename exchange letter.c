#include <stdio.h>
#include <ctype.h>
int main()
{
    char l,u;
    scanf("%c%c",&l,&u);
    u = toupper(l);
    printf("%c\n",u);
    return 0;
}
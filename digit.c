#include <stdio.h>
#include <string.h>
int main()
 {
    char a[100]; 
    int b;
    scanf("%s %d", a, &b);
        int index = strlen(a) - b;
        printf("%c\n", a[index]);
    return 0;
}
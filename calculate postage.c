#include <stdio.h>
int main(){
    int w;
    char h;
    scanf("%d %c",&w,&h);
    int m = (w <= 1000) ? 8 : 8 + 4*((w-501)/500);
    if (h == 'y'){
        m += 5;
    }
    printf("%d\n",m);
    return 0;
}
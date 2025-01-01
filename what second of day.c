#include <stdio.h>
int main(){
    int h,m,s;
    char d;
    scanf("%d %d %d %c",&h,&m,&s,&d);
    int ans = (d == 'A') ? (h*60+m)*60+s : ((h+12)*60+m)*60+s;
    printf("%d\n",ans);
    return 0;
}
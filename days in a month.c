#include <stdio.h>
int main(){
    int y,m,day;
    scanf("%d %d",&y,&m);
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
        day = 31;
    }
    if (m == 4 || m == 6 || m == 9 || m == 11){
        day = 30;
    }
    if (m == 2){
        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)){
            day = 29;
        }
        else{
            day = 28;
        }
    }
    printf("%d\n",day);
    return 0;
}
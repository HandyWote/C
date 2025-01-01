#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    for (int i = 2; i > 0; i++){
        if (a % i == b % i && a % i == c % i && c % i == b % i){
            printf("%d",i);
            return 0;
        }
    }
}
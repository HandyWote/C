#include <stdio.h>
int main(){
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    for (int i = 1; i < n+1; i++){
        if (i % m != 0){
            printf("%d\n",i);
        }
    }
    return 0;
}
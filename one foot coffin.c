#include <stdio.h>
int main(){
    int n,ans = 1;
    scanf("%d",&n);
    while (n != 1){
        n /= 2;
        ans += 1;
    }
    printf("%d",ans);
    return 0;
}
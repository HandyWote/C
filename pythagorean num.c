#include <stdio.h>
#include <math.h>
int main(){
    int n,ans = 0;
    scanf("%d",&n);
    for (int a = 1; a <= n; a++){
        for (int b = a; b <= n; b++){
            int c = (int)sqrt(a*a+b*b);
            if (c <= n && c*c == a*a +b*b){
                ans ++;
            }
        }
    }
    printf("%d\n",ans);
    return 0;
}
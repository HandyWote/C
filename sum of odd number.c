#include <stdio.h>
int main(){
    int n,m,ans = 0;
    scanf("%d %d",&n,&m);
    for (int i = n; i <= m; i++){
        if (i % 2 != 0){
            ans += i;
        }
    }
    printf("%d\n",ans);
    return 0;
}
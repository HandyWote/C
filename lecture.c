#include <stdio.h>
int main (){
    int n,m;
    int a[100],b[100];
    scanf("%d %d",&n,&m);
    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < m; i++){
        scanf("%d",&b[i]);
    }
    int ans = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (a[i] == b[j]){
                ans++;
            }
        }
    }
    printf("%d\n",ans);
    return 0;
}
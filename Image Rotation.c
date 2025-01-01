#include <stdio.h>
int main (){
    int n,m;
    scanf("%d %d",&n,&m);
    int l[101][101];
    for (int y = 0; y < n; y++){
        for (int x = 0; x < m; x++){
            scanf("%d",&l[y][x]);
        }
    }

    int ans[101][101];
    for (int y = 0; y < n; y++) {
        for (int x = 0; x < m; x++) {
            ans[x][n - 1 - y] = l[y][x];
        }
    }
    
    for (int y = 0; y < m; y++) {
        for (int x = 0; x < n; x++) {
            printf("%d ",ans[y][x]);
        }
        printf("\n");
    }

    return 0;

}
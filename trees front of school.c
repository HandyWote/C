#include <stdio.h>
#include <stdlib.h>
int main(){
    int l,m,u,v;
    scanf("%d %d",&l,&m);
    int *a = malloc(l * sizeof(int));
    for (int i = 0; i <= l; i++) {
        a[i] = 0;
        }
    for (int i = 0; i < m; i++){
        scanf("%d %d",&u,&v);
        for (int j = u; j <= v; j++){
            a[j] = 1;
            }
        }
    int ans = 0;
    for (int i = 0; i <= l; i++) {
        if (a[i] == 0) {
            ans++;
        }
    }
    printf("%d\n",ans);
    free(a);
    return 0;
}
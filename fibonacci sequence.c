#include <stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int k[30] = {0,1};
    for (int i = 2; i < 30; i++){
        k[i] = k[i - 1] + k[i - 2];
    }
    for (int i = 0; i < n; i++){
        int m;
        scanf("%d",&m);
        printf("%d\n",k[m]);
    }
    return 0;
}
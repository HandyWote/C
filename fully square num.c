#include <stdio.h>
#include <math.h>
int main (){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    int ans = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++){
            double k = pow(a[i]+a[j],0.5);
            if (k == floor(k)){
                ans++;
            }
        }
    }
    printf("%d\n",ans);
    return 0;
}
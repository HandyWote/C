#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],b[n],c[n];
    int s[n];
    for (int i = 0; i < n; i++){
        scanf("%d %d %d",&a[i],&b[i],&c[i]);
        s[i] = a[i] + b[i] +c[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++){
            if (abs(a[i]-a[j])<=5 && abs(b[i]-b[j])<=5 && abs(c[i]-c[j])<=5 && abs(s[i]-s[j])<=10){
                ans++;
            }
        }
    }
    printf("%d\n",ans);
    return 0;
}
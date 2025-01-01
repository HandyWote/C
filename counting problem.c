#include <stdio.h>
#include <string.h>
int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    int ans = 0;
    for (int num = 0; num <= n; num++){
        char str[12];
        sprintf(str, "%d", num);
        int len = strlen(str);
        for (int j = 0; j < len; j++){
            if (str[j] - '0' == k && num != 0){
                ans++;
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}
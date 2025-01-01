#include <stdio.h>
#include <string.h>
int main() {
    char a[16];
    int b,ans = 0;
    scanf("%s%d",a,&b);
    int len = strlen(a);
    for (int i = 0; i<len; i++){
        if (a[i] == '3'){
            ans += 1;
        }
    }
    if (ans == b){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
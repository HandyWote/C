#include <stdio.h>
#include <string.h>
int main (){
    int n;
    char a[51];
    char ans[51] = {0};
    scanf("%d",&n);
    scanf("%s",a);
    for (int i = 0; i < strlen(a); i++){
        int asc = 0;
        asc = (int)a[i];
        asc += n;
        if (asc > (int)'z'){
            asc -= 26;
        }
        ans[i] = (char)asc;
    }
    ans[strlen(ans)] = '\0';
    printf("%s\n",ans);
    return 0;
}
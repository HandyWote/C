#include <stdio.h>
#include <string.h>
int main (){
    int n;
    scanf ("%d",&n);
    for (int i = 0; i < n; i++){
        char a[11],b[11],c[11],d[11];
        scanf("%s %s %s %s",a,b,c,d);
        if (a[0] == 'y' && b[0] == 'y' && strcmp(c,"ding") == 0 && strcmp(d,"zhen") == 0){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}
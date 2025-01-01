#include <stdio.h>
int main(){
    int a,b,c,temp;
    scanf("%d %d %d",&a,&b,&c);
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }
    if (c>=a+b){
        printf("Not triangle\n");
    }
    else{
        if(a*a + b*b == c*c){
            printf("Right triangle\n");
        }
        if(a*a + b*b > c*c){
            printf("Acute triangle\n");
        }
        if(a*a + b*b < c*c){
            printf("Obtuse triangle\n");
        }
        if(a==b || a==c || b==c){
            printf("Isosceles triangle\n");
        }
        if(a==b && a==c && b==c){
            printf("Equilateral triangle\n");
        }
    }
    return 0;
}
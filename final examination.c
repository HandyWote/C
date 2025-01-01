#include <stdio.h>
#include <math.h>
int main (){
    int x;
    double gpa = 4.0;
    scanf("%d",&x);
    if (x < 60){
        x = floor(pow(x,0.5)*10);
        if (x < 60){
            gpa = 0.0;
        }
    }
    if (x >= 60 && x < 90){
        gpa = 4.0 - (90 - x)*0.1;
    }
    printf("%.1lf\n",gpa);
    return 0;
}
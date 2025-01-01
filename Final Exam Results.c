#include <stdio.h>
#include <math.h>
int main (){
    int x;
    double gpa;
    scanf("%d",&x);

    if (x<60){
        x = pow(x,0.5)*10;
        if (x < 60.0){
            gpa = 0.0;
        }
    }
        if (x>=90) {
        gpa = 4.0;
    }
    if (x>=60 && x<90){
        gpa = 4.0 - 0.1*(90-x);
    }
    printf("%.1lf\n",gpa);
    return 0;
}
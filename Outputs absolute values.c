#include <stdio.h>
#include <math.h>
int main(){
    double num;
    scanf("%lf",&num);
    num = fabs(num);
    printf("%.2lf\n",num);
    return 0;
}
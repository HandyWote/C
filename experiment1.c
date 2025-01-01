#include <stdio.h>
int main(void){
    double n;
    while (printf("输入你的n:") != 0 && scanf("%lf",&n) == 1 && n > 0){
        double ans1 = 0, ans2 = 0 ,u = 1.0;
        for (double i = 1; i <= n; i++){
            ans1 += 1.0 / i;
        }
        printf("数列一: %lf\n", ans1);
        for (double i = 1; i <= n; i++){
            ans2 += u * (1.0 / i);
            u = -u;
        }
        printf("数列二: %lf\n", ans2);
        printf("n小于等于0退出\n");
        printf("\n");
    }
    return 0;
}
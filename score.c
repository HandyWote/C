#include <stdio.h>
int main(){
    double arr[6];
    for (int i = 0; i < 6; i++){
        scanf("%lf",&arr[i]);
    }
    //tradiction
    int ans = 0;
    for (int i = 0; i < 3; i++){
        if (arr[i] < 60.0){
            ans += 1;
        }
    }
    if (ans > 1){
        printf("FAIL\n");
    }
    else{
        printf("PASS\n");
    }
    //spcial
    double s = (arr[0]*arr[3]+arr[1]*arr[4]+arr[2]*arr[5])/(arr[3]+arr[4]+arr[5]);
    if (s < 60.0){
        printf("FAIL\n");
    }
    else{
        printf("PASS\n");
    }
    return 0;
}
#include <stdio.h>
#include <math.h>
int main(void){
    int arr[9];
    for (int i = 0; i < 8; i++){
        arr[i] = pow(2,i+1);
    }
    int j = 0;
    do{
        printf("%d ",arr[j]);
    }while(++j < 8);
}
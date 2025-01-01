#include<stdio.h>
int IsleapYear(int x){
    if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0)){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int year,month,day,count = 0;
    scanf("%d/",&year);
    scanf("%d/",&month);
    scanf("%d",&day);
    if (month<=0 || month>12 || year*day<0 || day>31){
        printf("错误");
        return 0;
    }
    if (IsleapYear(year)){
        if (day > 29){
            printf("错误");
            return 0;
        }
        int arr[13] = {31,29,31,30,31,30,31,31,30,31,30,31};
        for (count; count<month-1; count++){
            day += arr[count];
        }
    }
    else{
        if (day > 28){
            printf("错误");
            return 0;
        }
        int arr[13] = {31,28,31,30,31,30,31,31,30,31,30,31};
        for (count; count<month-1; count++){
            day += arr[count];
        }
    }
    printf("%d",day);
    return 0;
}
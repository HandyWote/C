#include<stdio.h>
int IsRenYear(int x){
    if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0)){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int year, month ,day;
    scanf("%d/",&year);
    scanf("%d/",&month);
    scanf("%d",&day);
    if (month == 1){
        printf("%d",day);
    }
    else if (month == 2){
        printf("%d",31+day);
    }
    else if (month > 2 && month <= 12){
        if (month == 3){
            day += 31;
            if (IsRenYear(year)){
                day += 29;
            }
            else{
                day += 28;
            }
        }
        else if (month == 4){
            day += 31+31;
            if (IsRenYear(year)){
                day += 29;
            }
            else{
                day += 28;
            }
        }
        else if (month == 5){
            day += 31+31+30;
            if (IsRenYear(year)){
                day += 29;
            }
            else{
                day += 28;
            }
        }
        else if (month == 6){
            day += 31+31+30+31;
            if (IsRenYear(year)){
                day += 29;
            }
            else{
                day += 28;
            }
        }
        else if (month == 7){
            day += 31+31+30+31+30;
            if (IsRenYear(year)){
                day += 29;
            }
            else{
                day += 28;
            }
        }
        else if (month == 8){
            day += 31+31+30+31+30+31;
            if (IsRenYear(year)){
                day += 29;
            }
            else{
                day += 28;
            }
        }
        else if (month == 9){
            day += 31+31+30+31+30+31+31;
            if (IsRenYear(year)){
                day += 29;
            }
            else{
                day += 28;
            }
        }
        else if (month == 10){
            day += 31+31+30+31+30+31+30+31;
            if (IsRenYear(year)){
                day += 29;
            }
            else{
                day += 28;
            }
        }
        else if (month == 11){
            day += 31+31+30+31+30+31+30+31+30;
            if (IsRenYear(year)){
                day += 29;
            }
            else{
                day += 28;
            }
        }
        else if (month == 12){
            day += 31+31+30+31+30+31+30+31+31+30;
            if (IsRenYear(year)){
                day += 29;
            }
            else{
                day += 28;
            }
        }
        printf("%d",day);
    }
    else{
        printf("无效日期");
    }
    return 0;
}
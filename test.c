#include <stdio.h>
#include <stdlib.h>

void input(double (*ptr)[5]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 5; j++){
            scanf("%lf", &ptr[i][j]);
        }
    }
}

void output(double (*ptr)[5]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 5; j++){
            printf("%5.2f ", ptr[i][j]);
        }
        printf("\n");
    }
}

double average(double *ptr, int len) {
    double a = 0;
    for(int i = 0; i < len; i++) {
        a += ptr[i];
    }
    a /= len;
    return a;
}

double *average_a(double (*ptr)[5]) {
    double *a = (double *)malloc(3 * sizeof(double));
    for(int i = 0; i < 3; i++) {
        a[i] = average(ptr[i],5);
    }
    return a;
}

double max(double (*ptr)[5]){
    double m = **ptr;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            if(m <= ptr[i][j]) m = ptr[i][j];
        }
    }
    return m;
}

int main() {
    double list[3][5];
    double *average_arr;
    double average1;
    printf("Please enter 3 rows and 5 columns of data:\n");
    input(list);
    average_arr = average_a(list);
    for(int i = 0; i < 3; i++){
        printf("Average of arr: %5.2f\n", average_arr[i]);
    }
    free(average_arr);
    average1 = average((double *)list,15);
    printf("Average: %5.2f\n", average1);
    printf("Max of this arr: %5.2f\n", max(list));
    printf("Output:\n");
    output(list);
    return 0;
}
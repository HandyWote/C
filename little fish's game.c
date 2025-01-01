#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, s = 0;
    int *nums = (int *)malloc(100 * sizeof(int));
    while (scanf("%d", &num) && num != 0) {
        nums[s++] = num;
    }
    for (int i = s - 1; i >= 0; i--) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    free(nums);
    return 0;
}
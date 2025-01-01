#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

int main() {
	char a[100], b[100];
	scanf("%s %s", a, b);
	long long num = atoi(a);
	if (!num) { 
        printf("0");
        return 0; 
    }
	if (b[0] == '-') {
		printf("-");
	}
	printf("%lld", abs(num));
	return 0;
}
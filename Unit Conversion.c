#include <stdio.h>
#include <string.h>

int main() {
    double n = 0;
    scanf("%ld", &n);
    char s[100];
    scanf("%s", s);
    
    if (s[0] == 'B') {
    } else if (s[0] == 'K') {
        n *= 1024;
    } else if (s[0] == 'M') {
        n *= 1024 * 1024;
    } else if (s[0] == 'G') {
        n *= 1024 * 1024 * 1024;
    }
    
    double ans;
    int len = strlen(s);
    if (s[len - 2] == '?') {
        ans = n;
    } else if (s[len - 2] == 'K') {
        ans = (double)n / 1024;
    } else if (s[len - 2] == 'M') {
        ans = (double)n / (1024 * 1024);
    } else if (s[len - 2] == 'G') {
        ans = (double)n / (1024 * 1024 * 1024);
    }
    
    printf("%.6lf\n", ans);
    return 0;
}
/* 
#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    double value;
    char from, to, a, b;
    scanf("%lf", &value);
    scanf("%cB",&from);
    scanf("%c%c",&a,&b);
    scanf("%cB",&to);
    double ans = 0;
    if (from == 'G'){
        if (to == 'G'){
            ans = value;
        }
        if (to == 'M'){
            ans = value *1024;
        }
        if (to == 'K'){
            ans = value *1024 *1024;
        }
        if (to == 'B'){
            ans = value *1024 *1024 *1024;
        }
    }

    if (from == 'M'){
        if (to == 'G'){
            ans = value /1024;
        }
        if (to == 'M'){
            ans = value;
        }
        if (to == 'K'){
            ans = value *1024;
        }
        if (to == 'B'){
            ans = value *1024 *1024 ;
        }
    }

    if (from == 'K'){
        if (to == 'G'){
            ans = value /1024 /1024;
        }
        if (to == 'M'){
            ans = value /1024;
        }
        if (to == 'K'){
            ans = value;
        }
        if (to == 'B'){
            ans = value *1024;
        }
    }

    if (from == 'B'){
        if (to == 'G'){
            ans = value /1024 /1024 /1024;
        }
        if (to == 'M'){
            ans = value /1024 /1024;
        }
        if (to == 'K'){
            ans = value /1024;
        }
        if (to == 'B'){
            ans = value;
        }
    }
    printf("%.6f\n", ans);
    return 0;
}
*/
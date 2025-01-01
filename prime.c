#include <stdio.h>
#include <math.h>
#include <stdlib.h> // 引入stdlib.h以使用malloc和free


int p(long int n) {
    if (n <= 2) return 1;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}


int* Esieve(double n) {
    int* e = (int*)malloc((n + 1) * sizeof(int));
    for (int i = 0; i <= n; i++) e[i] = 1;
    for (int p = 2; p * p <= n; p++) {
        if (e[p]) {
            for (int i = p * p; i <= n; i += p) {
                e[i] = 0;
            }
        }
    }
    return e;
}

int* Osieve(double n){
    int* o = (int*)malloc((int)(n+1) * sizeof(int));
    for (int i = 0; i <= (int)n; i++) o[i] = 1;
    int* prime = (int*)malloc((int)n * sizeof(int));
    int prime_index = 0;
    for (int i = 2; i <= (int)n; ++i) {
        if (o[i]) {
            prime[prime_index++] = i;
            for (int j = 0; j < prime_index && i * prime[j] <= (int)n; ++j) {
                o[i * prime[j]] = 0;
                if (i % prime[j] == 0) break;
            }
        }
    }
    free(o);
    return prime;
}

int main() {
    int n = 100;
    //scanf("%d", &n);
    int* a = Esieve(n);
    for (int i = 4; i <= 100; i+=2) {
        for(int c = 2; a[c]<i; c++){
            if (a[c] && i-c>1 && c <= i-c) {
            printf("%d=%d+%d ",i,c,i-c);
            }
        }
        printf("\n");
    }
    free(a);
    return 0;
}
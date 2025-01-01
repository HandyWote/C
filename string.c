#include <stdio.h>
#include <string.h>

int main() {
    char s[1000000], t[1000000];
    int count[100] = {0};
    int result = 0;
    scanf("%s", s);
    scanf("%s", t);
    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }
    for (int i = 0; t[i] != '\0'; i++) {
        if (count[t[i] - 'a'] > 0) {
            count[t[i] - 'a']--;
            result++;
        }
    }
    printf("%d\n", result);
    return 0;
}
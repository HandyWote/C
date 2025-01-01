#include<stdio.h>
#include<string.h>

int main() {
    char str[201];
    int i, n = 0;
    gets(str); // 读取字符串
    for (i = 0; i < strlen(str); i++) { // 当检测到字符串结尾的‘\0’时，循环结束
        if (str[i] == 'a' || str[i] == 'd' || str[i] == 'g' || str[i] == 'j' || str[i] == 'm' || str[i] == 'p' || str[i] == 't' || str[i] == 'w' || str[i] == ' ') {
            n += 1;
        } else if (str[i] == 'b' || str[i] == 'e' || str[i] == 'h' || str[i] == 'k' || str[i] == 'n' || str[i] == 'q' || str[i] == 'u' || str[i] == 'x') {
            n += 2;
        } else if (str[i] == 'c' || str[i] == 'f' || str[i] == 'i' || str[i] == 'l' || str[i] == 'o' || str[i] == 'r' || str[i] == 'y' || str[i] == 'v' ) {
            n += 3;
        } else if (str[i] == 's' || str[i] == 'z') {
            n += 4;
        }
    }
    printf("%d", n);
    return 0;
}
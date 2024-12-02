#include <stdio.h>

void compressString(char *str) {
    int i = 0, count;
    while (str[i]) {
        count = 1;
        while (str[i] == str[i + 1]) { count++; i++; }
        printf("%c", str[i]);
        if (count > 1) printf("%d", count);
        i++;
    }
}

int main() {
    char str[100];
    printf("enter:");
    scanf("%s", str);
    compressString(str);
    return 0;
}

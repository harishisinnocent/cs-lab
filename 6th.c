#include <stdio.h>

int isRotation(char *str1, char *str2) {
    int len1 = 0, len2 = 0;
    while (str1[len1]) len1++;
    while (str2[len2]) len2++;
    if (len1 != len2) return 0;
    for (int i = 0; i < len1; i++) {
        int j = 0;
        while (str1[(i + j) % len1] == str2[j]) j++;
        if (j == len1) return 1;
    }
    return 0;
}

int main() {
    char str1[100], str2[100];
    scanf("%s %s", str1, str2);
    if (isRotation(str1, str2)) printf("Rotation\n");
    else printf("Not Rotation\n");
    return 0;
}

#include <stdio.h>

int areAnagrams(char *str1, char *str2) {
    int count[256] = {0};
    for (int i = 0; str1[i]; i++) count[str1[i]]++;
    for (int i = 0; str2[i]; i++) count[str2[i]]--;
    for (int i = 0; i < 256; i++) if (count[i] != 0) return 0;
    return 1;
}

int main() {
    char str1[100], str2[100];
    scanf("%s %s", str1, str2);
    if (areAnagrams(str1, str2)) printf("Anagrams\n");
    else printf("Not Anagrams\n");
    return 0;
}

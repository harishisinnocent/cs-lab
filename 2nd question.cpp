#include <stdio.h>

int fac(int N) {
    int fa = 1, i;

    for (i = 1; i <= N; i++) {
        fa *= i;
    }
    return fa;
}

int main() {
    int N;
    printf("enter the number: ");
    scanf("%d",&N);
    int fa = fac(N);
    printf("\nfactorial of %d is %d", N, fa);
}


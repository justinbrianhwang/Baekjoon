#include <stdio.h>

int main() {
    int num[2];
    scanf("%d %d", &num[0], &num[1]);

    int ones = num[1] % 10;
    int tens = (num[1] / 10) % 10;
    int hundreds = num[1] / 100;

    printf("%d\n", num[0] * ones);
    printf("%d\n", num[0] * tens);
    printf("%d\n", num[0] * hundreds);
    printf("%lld\n", (long long)num[0] * num[1]);

    return 0;
}


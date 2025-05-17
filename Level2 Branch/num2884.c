#include <stdio.h>

int main() {
    int hour, min;
    int total;
    scanf("%d %d", &hour, &min);
    total = hour * 60 + min - 45;
    if (total < 0)
        total += 24 * 60;

    hour = total / 60;
    min = total % 60;
    printf("%d %d\n", hour, min);
}

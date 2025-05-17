#include <stdio.h>

int main() {
    int hour, min, usr;
    scanf("%d %d", &hour, &min);
    scanf("%d", &usr);

    int total = hour * 60 + min + usr;
    hour = total / 60;
    if (hour >= 24)
        hour -= 24;
    min = total % 60;
    printf("%d %d\n", hour, min);
}

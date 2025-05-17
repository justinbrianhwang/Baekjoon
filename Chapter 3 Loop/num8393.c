#include <stdio.h>

int main() {
    int usr, total = 0;
    scanf("%d", &usr);
    for (int i = 1; i <= usr; i++)
        total += i;
    printf("%d\n", total);
}

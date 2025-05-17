#include <stdio.h>

int main() {
    int usr;
    scanf("%d", &usr);
    usr /= 4;
    for (int i = 0; i < usr; i++)
        printf("long ");
    printf("int\n");
}

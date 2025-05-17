#include <stdio.h>

int main() {
    int usr;
    scanf("%d", &usr);
    for (int i = 1; i <= 9; i++) {
        printf("%d * %d = %d\n", usr, i, usr * i);
    }
}

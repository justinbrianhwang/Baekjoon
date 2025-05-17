#include <stdio.h>

int main() {
    int usr[3];
    int i;
    for (i = 0; i < 3; i++) 
        scanf("%d", usr + i);
    printf("%d\n", (usr[0]+usr[1])%usr[2]);
    printf("%d\n", ((usr[0] % usr[2]) + (usr[1] % usr[2]))%usr[2]);
    printf("%d\n",(usr[0]*usr[1])%usr[2]);
    printf("%d\n", ((usr[0] % usr[2]) * (usr[1] % usr[2]))%usr[2]);
    return 0;
}

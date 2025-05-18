#include <stdio.h>

int main() {
        int usr;
        scanf("%d", &usr);
        for (int i = 1; i <= usr; i++) {
                for(int j = 1; j <= usr; j++) {
                        printf("*");
                        if (i == j) {printf("\n"); break;}
                }
        }
}

#include <stdio.h>

int main() {
    int usr[9], max = 0, index;
    for (int i = 0; i < 9; i++) 
        scanf("%d", usr + i);
    for (int i = 0; i < 9; i++) {
        if (usr[i] > max) {
            max = usr[i];
            index = i;
        }
    }
    printf("%d\n%d\n", max, index + 1);
    
}

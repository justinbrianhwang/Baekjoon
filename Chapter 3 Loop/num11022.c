#include <stdio.h>
#include <stdlib.h>

int main() {
    int user;
    int* array1, * array2;
    scanf("%d", &user);
    array1 = (int*)malloc(sizeof(int) * user);
    array2 = (int*)malloc(sizeof(int) * user);

    for(int i = 0; i < user; i++) {
        scanf("%d %d", &array1[i], &array2[i]);
    }
    
    for (int i = 0; i < user; i++) {
        printf("Case #%d: %d + %d = %d\n", i + 1, array1[i], array2[i],array1[i] + array2[i]);
    }
    free(array2);
    free(array1);
    return 0;
}



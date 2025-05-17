#include <stdio.h>
#include <stdlib.h>

typedef struct Store {
    int num1;
    int num2;
} Store;

int main() {
    int usr;
    scanf("%d", &usr);
    Store* array;
    array = (Store*)malloc(sizeof(Store) * usr);
    for (int i = 0; i < usr; i++) {
        scanf("%d %d",&array[i].num1, &array[i].num2);
    }
    for (int i = 0; i < usr; i++) {
        printf("%d\n", array[i].num1 + array[i].num2);
    }

    free(array);

}

#include <stdio.h>

int main() {
    int usr;
    int arr[1000000];
    int min = 1000000, max = -1000000;

    scanf("%d", &usr);
    for (int i = 0; i < usr; i++) 
        scanf("%d", arr + i);

    for (int i = 0; i < usr; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min) 
            min = arr[i];
    }
    printf("%d %d\n", min, max);

}

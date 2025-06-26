#include <stdio.h>

int main() {
    int count = 0;
    int arr[2][100];
    while(1) {
        scanf("%d %d", &arr[0][count], &arr[1][count]);
        if(arr[0][count] == 0 && arr[1][count] == 0) {break;}
        count++;
    }

    for (int i = 0; i < count; i++) 
        printf("%d\n", arr[0][i] + arr[1][i]);

    return 0;
}

#include <stdio.h>

int main() {
    int arr[10000];
    int N, X, cnt = 0;
    scanf("%d", &N);
    scanf("%d", &X);
    for (int i = 0; i < N; i++) 
        scanf("%d", arr + i);
    for (int i = 0; i < N; i++) {
        if (arr[i] < X) 
            printf("%d ", arr[i]);
    }
    printf("\n");
}

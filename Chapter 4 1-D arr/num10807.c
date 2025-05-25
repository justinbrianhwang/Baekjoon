#include <stdio.h>

int main() {
    int arr[100];
    int usr, usr2, count = 0; // 사용자에게 입력 받을 변수
    scanf("%d", &usr);
    for (int i = 0; i < usr; i++) {
        scanf("%d", arr + i);
    }
    scanf("%d", &usr2);
    for (int i = 0; i < usr; i++) {
        if (arr[i] == usr2) 
            count++;
    }
    printf("%d\n", count);

}

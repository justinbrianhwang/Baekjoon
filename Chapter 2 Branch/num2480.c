#include <stdio.h>

int main() {
    int dice[3], big = 0;
    for (int i = 0; i < 3; i++)
        scanf("%d", dice + i);
    if (dice[0] == dice[1] && dice[1] == dice[2])
        printf("%d\n", 10000 + 1000 * dice[0]);
    if (dice[0] == dice[1] && dice[1] != dice[2])
        printf("%d\n", 1000 + dice[0] * 100);
    if (dice[1] == dice[2] && dice[2] != dice[0])
        printf("%d\n", 1000 + dice[1] * 100);
    if (dice[2] == dice[0] && dice[0] != dice[1])
        printf("%d\n", 1000 + dice[2] * 100);
    if (dice[0] != dice[1] && dice[1] != dice[2] && dice[2] != dice[0]) {
        for (int i = 0; i < 3; i++) {
            if (big < dice[i])
                big = dice[i];
        }
        printf("%d\n", big * 100);
    }
}

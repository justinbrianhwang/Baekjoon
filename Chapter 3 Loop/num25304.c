#include <stdio.h>
#include <stdlib.h>

typedef struct Price {
    int price;
    int count;
} Price;

int main() {
    int total, usr, sum = 0;
    scanf("%d", &total);
    scanf("%d", &usr);
    Price* cart;
    cart = (Price*)malloc(sizeof(Price) * usr);
    for (int i = 0; i < usr; i++) {
        scanf("%d %d", &cart[i].price, &cart[i].count);
    }
    for (int i = 0; i < usr; i++)
        sum += (cart[i].price * cart[i].count);
    if (total - sum) 
        printf("No\n");
    else 
        printf("Yes\n");
}

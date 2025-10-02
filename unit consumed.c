/*
Name:Brian muturi
Reg no:ct100/g/26165/25
*/
#include <stdio.h>

int main() {
    int units;
    double bill = 0;

    printf("Enter water units consumed: ");
    scanf("%d", &units);

    if (units <= 30) {
        bill = units * 20;
    } else if (units <= 60) {
        bill = (30 * 20) + (units - 30) * 25;
    } else {
        bill = (30 * 20) + (30 * 25) + (units - 60) * 30;
    }

    printf("Total water bill: %.2lf KES\n", bill);

    return 0;
}


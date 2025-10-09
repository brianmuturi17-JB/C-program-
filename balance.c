/*
Name:Brian muturi
Reg no:ct100/g/26165/25
*/
#include <stdio.h>

int main() {
    float balance, withdraw;
    printf("Enter initial balance: ");
    scanf("%f", &balance);

    while (balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%f", &withdraw);
        balance -= withdraw;

        if (balance > 0)
            printf("Remaining balance: %.2f\n", balance);
        else
            printf("Insufficient balance. Final balance: %.2f\n", balance);
    }

    return 0;
}

    
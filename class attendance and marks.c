/*
Name:Brian muturi
Reg no:ct100/g/26165/25
*/
#include <stdio.h>

int main() {
    float attendance, averageMarks;

    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);

    printf("Enter average marks: ");
    scanf("%f", &averageMarks);

    if (attendance >= 75 && averageMarks >= 40) {
        printf("Eligible for final exams.\n");
    } else {
        printf("Not eligible.\n");
    }

    return 0;
}


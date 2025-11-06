/*
Name:Brian muturi
Reg no:ct100/g/26165/25
*/#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_LEN 100
#define REG_LEN  30

typedef struct {
    char name[NAME_LEN];
    char reg_no[REG_LEN];
    int total_marks;
} Student;

/* Optional helper: create sample results.dat
   Uncomment and run once to create test data.
void create_sample() {
    Student s[3] = {
        {"Alice Kamau", "REG001", 78},
        {"Brian Otieno", "REG002", 85},
        {"Chloe Mwangi", "REG003", 92}
    };
    FILE *f = fopen("results.dat", "wb");
    if (!f) { perror("open"); exit(1); }
    fwrite(s, sizeof(Student), 3, f);
    fclose(f);
}
*/

int main(void) {
    FILE *fp = fopen("results.dat", "rb");
    if (!fp) {
        perror("Error opening results.dat");
        return 1;
    }

    Student s;
    printf("Name\t\t\tTotal Marks\n");
    printf("----\t\t\t-----------\n");

    // read until fread returns fewer than 1 item (EOF)
    while (fread(&s, sizeof(Student), 1, fp) == 1) {
        printf("%-20s\t%d\n", s.name, s.total_marks);
    }

    if (!feof(fp)) {
        // some I/O error happened
        perror("Error reading from results.dat");
    }

    fclose(fp);
    return 0;
}
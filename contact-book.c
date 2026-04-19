#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INPUT_LENGTH 100

char *FILENAME = "contact_book_data.csv";

char name[INPUT_LENGTH];
char address[INPUT_LENGTH];
char email[INPUT_LENGTH];
char phone[INPUT_LENGTH];

int add_new_entry();

int main(int argc, char *argv[]) {
    if (argv[1] && argv[2] && argv[3] && argv[4]) {
        strncpy(name, argv[1], INPUT_LENGTH);
        strncpy(address, argv[2], INPUT_LENGTH);
        strncpy(email, argv[3], INPUT_LENGTH);
        strncpy(phone, argv[4], INPUT_LENGTH);
    } else {
        printf("Name: ");
        fgets(name, INPUT_LENGTH, stdin);
        name[strcspn(name, "\n")] = '\0';

        printf("Address: ");
        fgets(address, INPUT_LENGTH, stdin);
        address[strcspn(address, "\n")] = '\0';

        printf("Email: ");
        fgets(email, INPUT_LENGTH, stdin);
        email[strcspn(email, "\n")] = '\0';

        printf("Phone Number: ");
        fgets(phone, INPUT_LENGTH, stdin);
        phone[strcspn(phone, "\n")] = '\0';

        printf("\n");
    }
    add_new_entry();

    return 0;
}

int add_new_entry() {
    FILE *fptr;

    fptr = fopen(FILENAME, "a");

    fprintf(fptr, "\n%s, %s, %s, %s", name, address, email, phone);
    fclose(fptr);

    printf("\nSaved Contact!\n\n");

    return 0;
}

/*

int main(int argc, char *argv[]) {
    double a, b, answer;
    char operator,*stopstring;
    char *error = NULL;

    if (argv[1] && argv[2] && argv[3]) {
        a = strtod(argv[1], &stopstring);
        operator = argv[2][0];
        b = strtod(argv[3], &stopstring);
    } else {
        printf("First Number: ");
        scanf("%lf", &a);

        printf("Operator: ");
        scanf(" %c", &operator);

        printf("Second Number: ");
        scanf("%lf", &b);

        printf("\n");
    }

*/
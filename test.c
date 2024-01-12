#include <stdio.h>
#include <stdlib.h>

// Define a macro
#define MAX_LENGTH 100

// Global variable
int globalVar = 10;

// Function declaration
void printMessage();

int main() {
    // Local variables
    int i, j;
    char str[MAX_LENGTH] = "Hello, World!";
    float f = 10.5;
    double d = 20.123456;

    // Control structure: for loop
    for (i = 0; i < 5; i++) {
        printf("Loop iteration: %d\n", i);
    }

    // Control structure: if-else
    if (globalVar > 5) {
        printf("Global variable is greater than 5\n");
    } else {
        printf("Global variable is less than or equal to 5\n");
    }

    // Control structure: switch
    switch (globalVar) {
        case 10:
            printf("Global variable is 10\n");
            break;
        default:
            printf("Global variable is not 10\n");
    }

    // Function call
    printMessage();

    // Working with pointers
    int *ptr = &globalVar;
    printf("Pointer value: %d\n", *ptr);

    // Printing variables
    printf("String: %s\n", str);
    printf("Float: %f\n", f);
    printf("Double: %lf\n", d);

    return 0;
}

// Function definition
void printMessage() {
    printf("This is a function.\n");
}

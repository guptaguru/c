#include <stdio.h>

// Global variable
int globalVar = 10;

// Function prototype
void displayVariables();

int main() {
    // Local variable
    int localVar = 5;

    // Call function to display variables
    displayVariables();

    // Modify global variable
    globalVar = 20;

    // Call function again to display variables
    displayVariables();

    return 0;
}

// Function definition
void displayVariables() {
    // Static variable (retains its value between function calls)
    static int staticVar = 0;

    printf("Global Variable: %d\n", globalVar);
    printf("Static Variable: %d\n", staticVar);

    // Increment static variable for the next function call
    staticVar++;
}

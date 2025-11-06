#include <iostream>

int main() {
    int a = 10;
    int b = 20;

    // if-else statement
    if (a > b) {
        printf("a is greater than b\n");
    } else {
        printf("b is greater than a\n");
    }
    
    // if statement
    if (a == 10) {
        printf("a is equal to 10\n");
    }

    // if-else ladder
    if (a < b) {
        printf("a is less than b\n");
    } else if (a == b) {
        printf("a is equal to b\n");
    } else {
        printf("a is greater than b\n");
    }

    // ternary operator
    printf(a > b ? "a is greater than b\n" : "b is greater than a\n");
    
    return 0;
}
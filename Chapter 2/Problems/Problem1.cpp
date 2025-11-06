// To check whether a character is uppercase or lowercase using both character literals and ASCII values.
#include <iostream>

int main() {
    // Prompt user for a character input
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    // Using character literals
    if (ch >= 'a' && ch <= 'z') {
        printf("Character is a lowercase letter.\n");
    } else {
        printf("Character is an uppercase letter.\n");
    }

    // Using ASCII values 
    if (ch >= 97 && ch <= 122) {
        printf("Character is a lowercase letter (ASCII check).\n");
    } else {
        printf("Character is an uppercase letter (ASCII check).\n");
    }

    return 0;
}
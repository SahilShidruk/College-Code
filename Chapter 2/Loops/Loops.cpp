#include <iostream>

int main() {
    int a = 10;
    for (int i = 1; i <= 10; ++i) {
        printf("Iteration: %d\n", i);
    }

    while (a > 5)
    {
        printf("Value of a: %d\n", a);
        a--;
    }

    do {
        printf("Do-While Loop, a: %d\n", a);
        a++;
    } while (a < 10);
    
    return 0;
}
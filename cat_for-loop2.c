#include <stdio.h>

// 4 - Receiving this variable's value by the parameters and assigning it to the variable "limit".
void meow (int limit) {
    for (int counter = 0; counter < limit; counter++) {
        printf("meow\n");
    }
}

int main (void) {
    printf("How many \"meows\" do you want? Insert a number: ");
    // 1 - Declaration of a variable;
    int times;
    // 2 - Assigning a value for the already declared variable;
    scanf("%i", &times);
    printf("---\n\n");
    // 3 - Passing the value of this variable to the function meow as an argument;
    meow(times);
    printf("\n---");
}
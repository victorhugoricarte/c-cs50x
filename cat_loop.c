#include <stdio.h>

// Using a While Loop;
// It's recommended to put the variables inside of a function, or they'll be global variables;
// The conventional way to count is starting from 0 (zero) and adding to this value.

int main(void){
    int i = 0;
    while (i < 3){
        printf("meow\n");
        i++;
        // It's equal to "i + 1 ";
        // And "i--" is equal to "i - 1".
    }
}
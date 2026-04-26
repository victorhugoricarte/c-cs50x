#include <stdio.h>

void meow (int limit);

int main (void) {
    int times;

    printf("(Set a number) How many times do you want to see \"meow\"? ");
    scanf("%i", &times);

    meow(times);
}

void meow (int limit) {
    for (int counter = 0; counter < limit; counter++) {
        printf("meow\n");
    }
}
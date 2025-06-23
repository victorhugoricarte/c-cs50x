#include <stdio.h>

int x;
int y;

int main(void){
    printf("Define with an integer number:\nWhat's x? ");
    scanf("%i", &x);
    printf("What's y? ");
    scanf("%i", &y);
    printf("\nAnswer: ");

    if (x < y){
        printf("x is less than y!\n");
    } else if (x == y){
        printf("x is equal to y!\n");
    } else {
        printf("x is greater than y!\n");
    }
}
#include <stdio.h>

int age;

int main(void){
    printf("What's your age? ");
    scanf("%i", &age);
    // int var with & symbol to scan
    if (age >= 18){
        printf("You are of legal age");
    } else {
        printf("Your are NOT of legal age");
    }
}
#include <stdio.h>
// #include <cs50.h>

// string answer = get_string("What's your name? ");
int main(void){
    // String without pointer(*)
    char name[100];
    printf("What's your name? ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);
    return 0;
}
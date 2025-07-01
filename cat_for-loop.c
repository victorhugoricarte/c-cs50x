#include <stdio.h>

// A void function does not return a integer value at the end, being optional
void meow(void){
    printf("meow\n");
}

// An int function returns an integer value at the its end
int main(void){
    int i = 0;
    // To execute a function, put its name together with parenthesis "()" and a semicolon
    // Ex: functionName();
    while (i < 3){
        meow();
        i++;
    }
}
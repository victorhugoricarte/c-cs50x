#include <stdio.h>

// A void function does not return a integer value at the end, being optional
void meow(void){
    printf("meow\n");
}

// An int function returns an integer value at the its end
int main(void){
    // To execute an already defined function in another you'll need to declare it, put its name together with parenthesis "()" and a semicolon
    // Ex: functionName();
    for (int i = 0; i < 3; i++){
        meow();
    }
}
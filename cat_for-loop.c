#include <stdio.h>

// A void function does not return a integer value at the end, it is optional.
void meow(void){
    printf("meow\n");
}

// An int function returns an integer value at the its end.
int main(void){
    // To declare(nest) an already defined function in another you'll need to declare it, putting its name together with parenthesis "()" and a semicolon ";";
    // Ex: "theFunctionsName();".
    // A for loop is a control structure that allows you repeat a block of code a certain number of times using control variable divided in 3 parts;
    // Ex: "for (initialization; condition; updation) { body }".
    for (int i = 0; i < 3; i++){
        meow();
    }
}
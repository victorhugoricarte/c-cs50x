#include <stdio.h>

char answer;

int main(void){
    printf("Hi! Answer the question with [y] yes or [n] no:\n\n");
    printf("Do you agree? ");
    scanf("%c", &answer);

    if (answer == 'y'){
        printf("\nYou answered \"Yes\"\n");
    } else if (answer == 'n'){
        printf("\nYou answered \"No\"\n");
    } else {
        printf("\nWrong answer. Reload the executable.\n");
}
}
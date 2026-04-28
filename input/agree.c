#include <stdio.h>

char answer;

int main(void){
    printf("Hi! Answer the question with [y] yes or [n] no:\n\n");
    printf("Do you agree? ");
    scanf("%c", &answer);

    // The OR Logical operator (||) below
    if (answer == 'y' || answer == 'Y'){
        printf("\nYou answered \"Yes\".\n");
    } else if (answer == 'n' || answer == 'N'){
        printf("\nYou answered \"No\".\n");
    } else {
        printf("\nWrong answer. Reload the executable and try again.\n");
}
}
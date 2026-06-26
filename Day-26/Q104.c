//program to ceate quiz application
#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("Quiz Application\n");

    // Question 1
    printf("\n1.What is the capital of India?\n");
    printf("1) Mumbai  2) New Delhi  3) Kolkata  4) Chennai\n");
    scanf("%d", &answer);

    if (answer == 2) score++;

    // Question 2
    printf("\n2. Which is the largest planet?\n");
    printf("1) Earth  2) Mars  3) Jupiter  4) Venus\n");
    scanf("%d", &answer);

    if (answer == 3) score++;

    // Question 3
    printf("\n3.Who is the father of C language?\n");
    printf("1) Dennis Ritchie  2) Bjarne Stroustrup  3) James Gosling  4) Rossum\n");
    scanf("%d", &answer);

    if (answer == 1) score++;

    printf("\nFinal Score: %d/3\n", score);

    return 0;
}
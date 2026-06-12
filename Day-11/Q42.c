//program to write function to find maximum
#include<stdio.h>
#include<math.h>
int maximum(int num1, int num2);
int main() {
    int a,b;
    printf("enter two numbers to compare:");
    scanf("%d%d",&a,&b);
    int max = maximum(a, b);
    printf("The maximum of %d and %d is: %d\n", a, b, max);
    return 0;
}
int maximum(int num1, int num2) {
    // Use an if-else statement to compare the two values
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}


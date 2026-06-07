//program to recursive factorial
#include<stdio.h>
int factorial(int n);
int main(){
    int num,fact;
    printf("enter a number:");
    scanf("%d",&num);
    printf("factorial:%d",factorial(num));
    return 0;
}
int factorial(int n){
    //base case : when number is 1 factorial=1
    if(n==1) return 1;
    //recursive case 
    else return n*factorial(n-1);
}
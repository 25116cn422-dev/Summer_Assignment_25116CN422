//program to recursive sum of digits
#include<stdio.h>
#include<math.h>
int SumOfDigits(int num){
    // base case : when num =0 ,sum=0
    if (num==0) return 0;
    //recursive case: obtain last digits and call function itself for remaining digits
    else return (num%10)+SumOfDigits(num/10);
}
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    printf("sum of digits:%d",SumOfDigits(n));
    return 0;
}
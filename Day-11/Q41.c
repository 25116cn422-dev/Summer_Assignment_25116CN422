//program to write function to find sum of two nnumbers
#include<stdio.h>
#include<math.h>
int Sum(int a,int b){
    int c=a+b;
    return c;
}
int main(){
    int num1,num2,s;
    printf("enter two numbers to print sum of them:");
    scanf("%d%d",&num1,&num2);
    printf("sum=%d",s=Sum(num1,num2));
    return 0;
}
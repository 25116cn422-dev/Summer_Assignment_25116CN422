//WAP to print GCD of two integers
#include<stdio.h>
int main(){
    int num1,num2,a,b,temp;
    printf("enter two integers:");
    scanf("%d%d",&num1,&num2);
    a=(num1<0)? -num1:num1;
    b=(num2<0)? -num2:num2;
    while(b!=0){
       temp =b;
       b=a%b;
       a= temp; 
    }
    printf("the GCD of %d and %d is :%d\n",num1,num2,a);
    return 0;
}
//WAP to check armstrong number
#include<stdio.h>
#include<math.h>
int main(){
    int num,n,count=0,r;
    printf("enter the number:");
    scanf("%d",&num);
    n=num;
    while(num>0){
        r=num%10;
        count++;
        num/=10;
    }
    num=n;
    int result=0;
    while(num>0){
        r=num%10;
        result += pow(r,count);
        num/=10;
    }
    if (result==n){
        printf("%d is an armstrong number",n);
    }else {
        printf("%d is not an armstrong number",n);
    }
    return 0;
}
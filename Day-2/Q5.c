//Q5: WAP to find sum of digits of a number 
#include<stdio.h>
int main(){
    int n,r,sum=0,i;
    printf("enter a  number:");
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        sum+=r;
        n/=10;
    }
    printf(" the sum  of digits of number is %d",sum);
    return 0;
}
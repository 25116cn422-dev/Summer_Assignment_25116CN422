//Q7:wap to find product of digits
#include<stdio.h>
int main(){
    int n,r,p=1,i;
    printf("enter a number to find product of its digits:");
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        p*=r;
        n/=10;
    }
    printf("product of digits of a given number is %d",p);
    return 0;
}
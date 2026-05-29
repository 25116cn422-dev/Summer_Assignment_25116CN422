//Q6:wap to reverse a number
#include<stdio.h>>
int main(){
    int n,r,rev=0,i;
    printf("enter a number to reverse it:");
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        rev=rev*10+r;
        n/=10;
    }
    printf("reverse of the given number is %d",rev);
    return 0;
}
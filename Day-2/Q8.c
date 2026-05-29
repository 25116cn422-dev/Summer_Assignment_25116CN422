//Q8:wap to check pallindrome number
//Q6:wap to reverse a number
#include<stdio.h>>
int main(){
    int n,r,rev=0,i,n1;
    printf("enter a number to check if its pallindrome:");
    scanf("%d",&n);
    n1=n;
    while(n>0){
        r=n%10;
        rev=rev*10+r;
        n/=10;
    }
    if(rev==n1)printf("number is pallindrome");
    else printf("number is not pallindrome");
    return 0;
}
//WAP to find nth fibonacci term
#include<stdio.h>
int main(){
    int n,i,a=0,b=1,c;
    printf("enter the term :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    printf("the %d term of fibonacci series is %d",n,c);
    return 0;
}
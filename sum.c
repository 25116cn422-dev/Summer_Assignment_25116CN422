#include<stdio.h>
int main() {
    //program for sum of first n natural numbers
    int n,sum=0,i,a,j;
    printf("Enter a natural number to find sum upto it:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=i;
    }
    printf("sum of first n natural numbers is %d",sum);
    return 0;
}
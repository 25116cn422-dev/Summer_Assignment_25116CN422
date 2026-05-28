#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf(" Enter a natural number :");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        sum+=i;
    }
    printf("the sum of natural numbers upto given number is %d",sum);
    return 0;
}
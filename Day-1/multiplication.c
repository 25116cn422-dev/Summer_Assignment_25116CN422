//proram to find multiplication table of a given number
#include<stdio.h>
int main(){
    int n,i;
    printf("enter a number to get table:");
    scanf("%d",&n);
    for (i=1;i<=10;i++){
        printf("%d*%d=%d",n,i,n*i);
    }
    return 0;
}
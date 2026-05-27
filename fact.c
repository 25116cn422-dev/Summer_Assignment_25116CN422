#include<stdio.h>
int main(){
    int n,fact=1,i;
    printf("enter a number to find its factorial :");
    scanf("%d",&n);
    if(n<0){
        printf("enter a positive number");
        return 0;
    }
    for (i=1;i<=n;i++){
        fact*=i;
    }
    printf("factorial is %d",fact);
    return 0;
}
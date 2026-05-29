//program to find factorial of a number
#include<stdio.h>
int main(){
    int n,fact,i;
    printf("enter a number to find  factorial of a number:");
    scanf("%d",&n);
    if(n<0){ 
        printf("factorial of negative number does not exist");
        return 0;
    }    
    for(i=1;i<=n;i++){
        fact*=i;
    }
    printf("factorial is %d",fact);
    return 0;
}
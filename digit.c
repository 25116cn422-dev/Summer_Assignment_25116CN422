#include<stdio.h>
int main(){
    int n,r,count=0;
    printf("enter a number to find number of digits in it:");
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        count++;
        n/=10;
    }
    printf("there are %d digits in given number",count);
    return 0;
}
//program to count digits in a number
#include <stdio.h>
int main(){
    int n ,i,r,count=0;
    printf("enter a number :");
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        count++;
        n/=10;
    }
    printf(" number of digits in number is %d",count);
    return 0;
}
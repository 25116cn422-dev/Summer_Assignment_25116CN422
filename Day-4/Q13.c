//WAP to generate fibonacci series
#include<stdio.h>
int main(){
    int n,i,a=0,b=1,c;
    printf("enter the  number of terms of fibonacci series:");
    scanf("%d",&n);
    printf("fibonacci series:\n");
    printf("%d %d ",a,b);
    for(i=3;i<=n;i++){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    return 0;
}
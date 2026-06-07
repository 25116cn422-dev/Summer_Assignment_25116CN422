//program to recursive fibonacci
#include<stdio.h>
int fibonacci(int n);
int main(){
    int n,i;
    printf("enter the number of terms:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("%d ",fibonacci(i));
    }
    return 0;
}
int fibonacci(int n){
    //base case for n=0 and 1 terms are 0,1
    if(n==0) return 0;
    else if(n==1)return 1;
    else return fibonacci(n-1)+fibonacci(n-2);
}
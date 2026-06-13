//program to write function for finonacci
#include<stdio.h>
#include<math.h>
int fibonacci(int n);
int main(){
    int n;
    printf("enter the number of terms to print fibonacci series:");
    scanf("%d",&n);
    printf("fibonacci series:\n");
    fibonacci(n);
}
int fibonacci(int n){
    int a=0,b=1,c;
    //print first two digits
    printf("%d %d ",a,b);
    //loop to print remaining digits
    for(int i=2;i<n;i++){
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
        
    }
}

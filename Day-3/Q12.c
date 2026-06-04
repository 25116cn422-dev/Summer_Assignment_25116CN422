//WAP to find LCM of two numbers
#include<stdio.h>
//Function to find gcd
int GCD(int a,int b){
    while(b!=0){
    int temp=b;
    b=a%b;
    a=temp;
    }
    return a;
}
//function to find lcm
int LCM(int a,int b){
    return(a/GCD(a,b))*b;
}
int main(){
    int n1,n2,lcm;
    printf("enter two integers");
    scanf("%d%d",n1,n2);
    int n=(n1<0)?-n1:n1;
    int m=(n2<0)?-n2:n2;
    if(n==0||m==0){
        printf("LCM of 0 and any number is 0.\n");
        return 0;
    }
    lcm=LCM(n,m);
    printf("LCM of %d and %d is %d",n1,n2,lcm);
    return 0;
}
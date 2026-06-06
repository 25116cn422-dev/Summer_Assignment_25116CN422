//program to convert binary to decimal
#include<stdio.h>
#include<math.h>
int decimal(long long n){
    int remainder,num=0,i=0;
    while(n!=0){
        remainder=n%10;
        n/=10;
        num+=remainder*pow(2,i);
        i++;
    }
    return num;
}
int main(){
    long long n;
    printf("Enter a binary number:");
    scanf("%lld",&n);
    printf("Decimal number:%d\n",decimal(n));
    return 0;
}
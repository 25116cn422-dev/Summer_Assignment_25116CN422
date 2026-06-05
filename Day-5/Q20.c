//program to find largest prime factor
#include<stdio.h>
#include<math.h>
long long maxPrime(long long a){
    long long max=-1;
    while(a%2==0){
        max=2;
        a/=2;
    }
    for(long long i=3;i*i<=a;i+=2){
        if(a%i==0){
            max=i;
            a/=i;
        }
    }
    if(a>2){
        max=a;
    }
    return max;
}
int main(){
    long long num;
    printf("enter a number:");
    if (scanf("%lld",&num)!=1||num<=1){
        printf("Please enter a valid integer greater than 1.\n");
        return 1;
    }
    long long result =maxPrime(num);
    printf("Largest prime factor of %lld is %lld",num,result);
    return 0;
}
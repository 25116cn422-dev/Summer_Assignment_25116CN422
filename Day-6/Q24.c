//program to find x^n without pow()
#include<stdio.h>
double Power(double base,long long exp){
    //handle negative exponent
    if(exp<0){
        base=1.0/base;
        exp=-exp;
    }
    double result =1.0;
    while(exp>0){
        //if exp is odd,multiply the base with the result
        if(exp%2!=0){
            result*=base;
        }
        //square the base
        base*=base;
        //divide the exponent by 2
        exp/=2;
    }
    return result;
}
int main(){
    double base;
    long long exp;
    printf("enter base(x) and exponent(n): ");
    scanf("%lf%lld",&base,&exp);
    printf("%lf^%lld = %lf\n",base,exp,Power(base,exp));
    return 0;
}
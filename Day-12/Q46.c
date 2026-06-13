//program to wirte function for armstrong
#include<stdio.h>
#include<math.h>
void armstrong(int num);
int main(){
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    armstrong(a);
     return 0;
}
void armstrong(int num){
    
    int r,n,count=0,result=0;
    n=num;
    //loop to  count the number of digits
    while(num!=0){
        r=num%10;
        count++;
        num/=10;
    }
    num=n;
    //loop to add digits raised to the power equal to number of digits
    while(num!=0){
        r=num%10;
        result+=pow(r,count);
        num/=10;
    }
    if(result==n) printf("%d is an armstrong number",n);
    else printf("%d is not an armstrong number",n);
}
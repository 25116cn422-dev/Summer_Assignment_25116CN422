//program to recursive reverse number
#include<stdio.h>
#include<math.h>
int reverse(int num,int rev){
    //base case: when number is 0,reverse=0
    if(num==0)return rev;
    //recursive case
    else return reverse(num/10,rev*10+num%10);


}
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    printf ("reverse : %d",reverse(n,0));
    return 0;
}

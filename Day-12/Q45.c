//program to write function for palindrome
#include<stdio.h>
#include<math.h>
void palindrome(int num){
    int r,n,rev=0;
    n=num;
    while(num!=0){
        r=num%10;
        //find reverse
        rev=rev*10+r;
        num/=10;
    }
    //palindrome numbers is equal to its reverse
    if(rev==n) printf ("%d is a palindrome number",n);
    else printf("%d is not a palindrome number",n);
}
int main(){
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    palindrome (a);
    return 0;
}
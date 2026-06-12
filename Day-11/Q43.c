//program to write function to check prime
#include<stdio.h>
#include<math.h>
int prime(int n){
    int count=0;
    
    for(int i=2;i<n;i++){
        if(n%i==0){
            count++;
            break;
        }   
    }
    if(count==0) printf("%d is a prime number",n);
    else printf("%d is not a prime number",n);
}
int main(){
    int num;
    printf("enter a  number:");
    scanf("%d",&num);
    prime(num);
    return 0;
}

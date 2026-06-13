//program to write function for perfect number
#include<stdio.h>
#include<math.h>
void perfect(int n);
int main(){
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    perfect(num);
    return  0;
}
void perfect(int n){
    int sum=0;
    //check its factors
    for(int i=1;i<n;i++){
        if(n%i==0){
            //add the factors
            sum+=i;
        }
    }
    //perfect number is equal to the sum of its factors
    if(sum==n) printf("%d is a perfect number",n);
    else printf("%d is not a perfect number",n);
}
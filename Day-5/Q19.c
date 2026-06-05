//program to print factors of a number
#include<stdio.h>
#include<math.h>
int factors(int n){
    for (int i=1;i<=n;i++){
        if(n%i==0){
            printf ("%d ",i);
        }
    }
}
int main(){
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    factors(num);
    return 0;
}
//program to write function to find factorial
#include<stdio.h>
#include<math.h>
int fact(int n){
    int p=1;
    for(int i=1;i<=n;i++){
        p*=i;
    }
    return p;
}
int main(){
    int num,f;
    printf("enter a number:");
    scanf("%d",&num);
    printf("factorial is %d",f=fact(num));
    return 0;
}
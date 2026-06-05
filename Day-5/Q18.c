//program to check strong number
#include<stdio.h>
#include<math.h>
int fact(int a){
    int p=1;
    for(int i=1;i<=a;i++){
        p*=i;
    }
    return p;
}
int main(){
    int num,r,sum=0,n;
    printf("enter a number:");
    scanf("%d",&num);
    n=num;
    while(num!=0){
        r=num%10;
        int f = fact(r);
        sum+=f;
        num/=10;
    }
    if(sum==n){
        printf("%d is a strong number",n);
    }else{
        printf("%d is not a strong number",n);
    }
    return 0;
}
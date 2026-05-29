# include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("enter a natural number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=i;
    }
    printf(" the sum of all natural  numbers upto given number is %d",sum);
    return 0;
}
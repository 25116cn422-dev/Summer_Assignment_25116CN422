//WAP to print prime numbers in a range
#include<stdio.h>
int main(){
    int start,end,i,found=0;
    printf("enter upper bound:");
    scanf("%d",&start);
    printf("enter lower bound:");
    scanf("%d",&end);
    int isPrime=1;
    for(i=start;i<=end;i++){
        if(i<=1) isPrime=0;
        else if (i==2)isPrime=1;
        else if(i%2==0)isPrime=0;
        else {
            for(int j=3;j*j<=i;j+=2){
               if(i%j==0){
                isPrime=0;
                break;
               }
            }
        }
        if (isPrime ==1){
            printf("%d",i);
            found=1;
        }
    }
    if(found==0){
        printf("None");
    }
    printf("\n");
    return 0;
}
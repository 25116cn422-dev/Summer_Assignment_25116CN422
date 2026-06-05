//WAP to print armstrong numbers in a range
#include<stdio.h>
#include<math.h>
int armstrong(int num){
    int n=num;
    int r,count=0,result =0;
    while(num!=0){
        r=num%10;
        count++;
        n/=10; 
    }
    num=n;
    while(num!=0){
        r=num%10;
        result+=pow(r,count);
        num/=10;
    }
    if(result==n){
        return 1;
    }else return 0;
}
int main(){
    int start,end,i;
    printf("enter the starting number:");
    scanf("%d",&start);
    printf("enter the ending number:");
    scanf("%d",&end);
    int found;
    for(i=start;i<=end;i++){
        if(armstrong(i)){
          printf("%d",i);
          found=1;
        }
    }
    if(!found){
        printf("No armstrong numbers in given range");
    }
    return 0;
}    
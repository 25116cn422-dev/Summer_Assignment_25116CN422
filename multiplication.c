#include<stdio.h>
#include<math.h>
int main(){
    int a,i;
    printf("enter a number to find multiplication table of it:");
    scanf("%d",&a);
    for(i=1;i<=10;i++){
        printf("%d*%d=%d\n",a,i,a*i);
    }
    return 0;
}
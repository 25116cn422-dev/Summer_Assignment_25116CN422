//program to find diagonal sum
#include<stdio.h>
int main(){
    int n,i,j;
    printf("enter order of matrix:");
    scanf("%d",&n);
    int a[n][n];
    //get elements from user
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("enter a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    int sum=0;
    for(i=0;i<n;i++){
           sum+=a[i][i];
    }
    printf("Sum of diagonal elements is %d",sum);
    return 0;
}
//write a program to print number triangle
#include<stdio.h>
int main(){
    int row,i,j;
    printf("enter the number of rows:");
    scanf("%d",&row);
    //outer loop for vertical rows
    for(i=1;i<=row;i++){
        //inner loop to print pattern
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
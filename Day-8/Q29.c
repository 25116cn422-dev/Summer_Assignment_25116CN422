//program to print half pyramid pattern
#include<stdio.h>
int main(){
    int row,i,j;
    printf("enter the number of rows:");
    scanf("%d",&row);
    //outer loop for vertical rows
    for(i=0;i<row;i++){
        //inner loop to print symbol
        for(j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
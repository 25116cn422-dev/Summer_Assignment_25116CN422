//program to print reverse star pattern
#include<stdio.h>
int main(){
    int row,i,j;
    printf("enter the number of rows:");
    scanf("%d",&row);
    //outer loop for vertical rows
    for(i=row;i>=1;i--){
        //inner loop to print reverse star pattern
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
//program to print repeated-number pattern
#include<stdio.h>
#include<math.h>
int main(){
    int row,i,j;
    printf("enter the number of rows:");
    scanf("%d",&row);
    //outer loop for vertical rows
    for(i=1;i<=row;i++){
        //inner loop to print numbers
        for(j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
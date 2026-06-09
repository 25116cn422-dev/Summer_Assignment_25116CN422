//program to print repeated character pattern
#include<stdio.h>
int main(){
    int row,i,j;
    printf("enter the number of rows:");
    scanf("%d",&row);
    //outer loop for vertical rows
    for(i=0;i<row;i++){
        //inner loop to print repeated number pattern
        for(j=0;j<=i;j++){
            printf("%c",'A'+i);
        }
        printf("\n");
    }
    return 0;
}
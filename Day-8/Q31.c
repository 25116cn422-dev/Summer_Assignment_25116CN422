//write a program to print character triangle
#include<stdio.h>
int main(){
    int row,i;
    printf("enter the number of rows:");
    scanf("%d",&row);
    //outer loop for vertical rows
    for(i=0;i<row;i++){
        //inner loop for printing characters
        for(int j=0;j<=i;j++){
            printf("%c",'A'+j);
        }
        printf("\n");
    }
    return 0;
}
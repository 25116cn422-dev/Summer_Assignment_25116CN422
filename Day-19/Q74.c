//program to subtract matrices
#include<stdio.h>
int main(){
    int r1,c1,r2,c2,i,j,k;

    // get the size from user
    printf("enter the number of row and column of first matrix:");
    scanf("%d%d",&r1,&c1);
    printf("enter the number of row and column of second matrix:");
    scanf("%d%d",&r2,&c2);
    int a[r1][c1],b[r2][c2];
    //get elements from user
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("enter a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("enter b[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    //for sum row amd column must be equal
    if(r1!=r2&&c1!=c2){
        printf("subtraction is not possible!");
        return 1;
    }
    //declare a 2D array as subtraction matrix
    int c[r1][c1];
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            //add corressponding elements
            c[i][j]=a[i][j]-b[i][j];
        }
    }
    //print the subtraction in form of matrix
    printf("subtraction of matrices:\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

}
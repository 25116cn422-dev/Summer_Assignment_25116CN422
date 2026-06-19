//program to transpose matrix
#include<stdio.h>
int main(){
    int r1,c1,i,j;
    printf("enter row and column of matrix:");
    scanf("%d%d",&r1,&c1);
    int a[r1][c1];
    //get elements from user
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("enter a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    //print elements at changed indices 
    printf("transpose of matrix :\n");
    for(i=0;i<c1;i++){
        for(j=0;j<r1;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
    
}
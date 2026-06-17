//program to merge arrays
#include<stdio.h>
int main(){
    int n,m;
    printf("enter the size of first array:");
    scanf("%d",&n);
    printf("enter the size of second array:");
    scanf("%d",&m);
    int arr1[n],arr2[m];
    printf("enter %d elements of first array:",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    printf("enter %d elements of second array:",m);
    for(int i=0;i<m;i++){
        scanf("%d",&arr2[i]);
    }
    //declare a third array which has size equal to size of both arrays 
    int des[n+m];
    int k=0,i,j;
    //copy elements of first array
    for(i=0;i<n;i++){
        des[k]=arr1[i];
        k++;
    }
    //copy elements of second array
    for(j=0;j<m;j++){
        des[k]=arr2[j];
        k++;
    }
    
    for(i=0;i<(n+m);i++){
        printf("%d ",des[i]);
    }
    return 0;

}
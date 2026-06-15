//write a program to input and display array
#include <stdio.h>
int main(){
    int i,n;
    
    //take size of array from user
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    
    //loop for input
    for(i=0;i<n;i++){
        printf("enter arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    
    //loop for displaying array
    printf("the array is:\n");
    for(i=0;i<n;i++){
       printf("%d\t",arr[i]);
    }
    return 0;
}
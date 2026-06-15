//program to find largest and smallest element
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

    //assume largest and smallest elements
    int max=arr[0];
    int min=arr[0];

    //loop to check if elements of array are greater or less than assumed values
    for(i=0;i<n;i++){
        if(arr[i]>max) max=arr[i];
        else if(arr[i]<min) min=arr[i];
    }

    printf("the largest element=%d\n",max);
    printf("the smallest element=%d",min);
    
    return 0;
}
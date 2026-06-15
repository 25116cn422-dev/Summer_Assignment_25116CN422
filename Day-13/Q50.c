//program to find sum and average of array
#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];

    //take elements of array from user
    for(i=0;i<n;i++){
        printf("enter a[%d]:",i);
        scanf("%d",&arr[i]);
    }

    //loop to add elements
    for(i=0;i<n;i++){
        sum+=arr[i];
    }

    printf("sum = %d\n",sum);
    
    //find average
    float avg=(float)sum/n;
    printf("average=%f",avg);
    return 0;
}
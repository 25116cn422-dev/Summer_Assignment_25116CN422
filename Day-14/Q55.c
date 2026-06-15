//program to find second largest element
#include<stdio.h>
int Second_Largest_element(int a[],int n);
int main(){
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];

    //input array
    for(int i=0;i<n;i++){
        printf("enter arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    int max2=Second_Largest_element(arr,n);
    printf("second largest element=%d",max2);
    return 0;   
}
int Second_Largest_element(int a[],int n){
    int max,max2;

    //compare first two elements and set the largest and second largest elements according to that
    if (a[0]>a[1]){
         max=a[0];
         max2=a[1];
    }else{
        max=a[1];
        max2=a[0];
    }

    //traverse rest elements
    for(int i=2;i<n;i++){
       if(a[i]>max){
        max2=max;
        max=a[i];
       }
       else if(a[i]>max2&&a[i]<max) max2=a[i];
    }
    return max2;

}

//program to check frequency of an element
#include<stdio.h>

//function for frequency
int frequency(int a[],int n,int key){
    int freq=0;
    //loop to check each element with given element 
    for(int i=0;i<n;i++){
        //increase frequency number if element matches
        if(a[i]==key){
            freq++;
        }
    }
    return freq;
}
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
    int e;
    printf("enter the element to check frequency:");
    scanf("%d",&e);
    int f=frequency(arr,n,e);
    printf("frequency of %d is %d",e,f);
    return 0;
}
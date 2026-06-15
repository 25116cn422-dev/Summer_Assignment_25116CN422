//program to linear search
#include<stdio.h>

//function for linear search
int LinearSearch(int a[],int n,int key){
    int loc=-1;
    for(int i=0;i<n;i++){
        if(a[i]==key){
            loc=i;
            break;
        }
    }
    return loc;
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
    printf("enter the element to search:");
    scanf("%d",&e);
    int c=LinearSearch(arr,n,e);
    
    //print the output according to index and elemnet
    if(c!=-1) printf("element %d is found at %d index",e,c);
    else printf("%d element is not found",e);
    return 0;
}   
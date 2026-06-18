//program for binary search 
#include<stdio.h>
int main(){
    int n,i,mid,key;
    printf("enter the size of array :");
    scanf("%d",&n);
    int a[n];
    printf("enter the sorted array of %d elements:",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the element to be searched:");
    scanf("%d",&key);
    int beg=0,end=n-1;
    while(beg<=end){
        mid=(beg+end)/2;
        if(key==a[mid]){
            printf("%d element is found at %d index",key,mid);
            break;
        }
        else if (key<a[mid]){
            end=mid-1;
        }
        else beg=mid+1;
    }
    if(beg>end){
        printf("search unsuccessful : element not found");
    }
    return 0;
}
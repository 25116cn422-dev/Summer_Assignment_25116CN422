//program for selection sort
#include<stdio.h>
void selection(int a[],int n);
int main(){
    int n,i;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    //get the elements of array from user
    printf("enter %d elements:",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    selection(arr,n);
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
void selection(int a[],int n){//
    int min,key,j,i;
    for(int i=0;i<n-1;i++){
        //assume the current element is minimum
        min=i;
        for(j=i+1;j<=n-1;j++){
            if(a[j]<a[min]){
                //if smaller element is found then update the index
                min=j;
                
            }
        }
        if(min!=i){
            //if the index is changes then swap those element to get sorted array
            key=a[i];
            a[i]=a[min];
            a[min]=key;
        }
    }
}
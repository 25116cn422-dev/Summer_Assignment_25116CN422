//program for bubble sort
#include<stdio.h>
//function declaration
void bubble(int a[],int n);
int main(){
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];

    //get the elements of array from the user
    printf("enter %d elements of array:",n);
    for( int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //pass array to function
    bubble(arr,n);
    printf("sorted array:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
void bubble(int a[],int n){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-1;j++){
            //check if first element is smaller than next and swap
            if(a[j]<a[j-1]){
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }

}
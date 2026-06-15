//program to rotate array left
#include <stdio.h>
int main(){
    int n,d;
    printf("enter size of array:");
    scanf("%d",&n);
    int a[n];
    //input array
    printf("enter array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter number of positions to rotate:");
    scanf("%d",&d);
    d=d%n;
    //take temporary array
    int temp[d];
    //store first d elements
    for(int i=0;i<d;i++){
        temp[i]=a[i];
    }
    //shift elements
    for(int i=d;i<n;i++){
        a[i-d]=a[i];
    }
    //copy temp elements to end
    for(int i=0;i<d;i++){
        a[n-d+i]=temp[i];
    }
    printf("array after rotation:\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}


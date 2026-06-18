//proram to sort array in descending order
#include<stdio.h>
int main(){
    int n,i;
    printf("enter the size of array:");
    scanf("%d",&n);
    int a[n];
    //get the elements of array from user
    printf("enter %d elements:",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int temp;
    for(i=0;i<n;i++){
        for(int j=1;j<=n-1;j++){
            //check if the element is greater than previous and swap
            if(a[j]>a[j-1]){
                temp=a[j-1];
                a[j-1]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("array in descending order:\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
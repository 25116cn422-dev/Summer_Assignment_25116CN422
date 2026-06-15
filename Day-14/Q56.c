//program to find duplicates in array
#include<stdio.h>
int duplicate(int a[],int n,int key){
    int freq=0;

    //gives frequency of each element
    for(int i=0;i<n;i++){
            if(a[i]==key){
               freq++;
            }   
    }
    return freq;
}
int main(){
    int n;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("enter a[%d]",i);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        int counted=0;
        //loop to check whether tthe element is counted before or not
        for(int j=0;j<i;j++){
            if(a[i]==a[j]){
                counted=1;
                break;
            }
        }
        if(counted) continue;
        //check frequency
        int f=duplicate(a,n,a[i]);
        //print element and number of duplicates only if frequency is greater than one 
        if(f>1) printf("%d has %d duplicates\n",a[i],f);
      
    }
    return 0;
}
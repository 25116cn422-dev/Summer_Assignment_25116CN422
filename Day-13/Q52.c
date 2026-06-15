//program  to count even and odd elements of array 
#include<stdio.h>
#include<math.h>
int main(){
    int n,i;
    //take size from user
    printf("enter the size of array:");
    scanf("%d",&n);
    int a[n];
    //take elements fro user
    for(i=0;i<n;i++){
        printf("enter a[%d]:",i);
        scanf("%d",&a[i]);
    }
     int even=0,odd=0;
    //check even and odd elements
    for(i=0;i<n;i++){
        if(a[i]%2==0) even++;
        else odd++;
    }
    printf("even elements:%d\nodd elements=%d",even,odd);
    return 0;
}

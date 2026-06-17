//program to find common elements
#include <stdio.h>

int main() {
    //Input arrays
    int n,m;
    printf("enter the size of first array:");
    scanf("%d",&n);
    printf("enter the size of second array:");
    scanf("%d",&m);
    int arr1[n],arr2[m];
    printf("enter %d elements of first array:",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    printf("enter %d elements of second array:",m);
    for(int i=0;i<m;i++){
        scanf("%d",&arr2[i]);
    }
    
    int c[100]; 
    int sizeC = 0; 
    
    //Find common elements
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            
            // If an element matches in both arrays
            if(arr1[i] == arr2[j]) {
                c[sizeC] = arr1[i]; 
                sizeC++;                         
                break;           
            }
        }
    }
    
    // Print the result
    printf("common elements: ");
    for(int i = 0; i < sizeC; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");
    
    return 0;
}
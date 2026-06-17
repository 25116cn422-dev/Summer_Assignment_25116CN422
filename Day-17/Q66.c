//program to union of arrays
#include<stdio.h>
int main(){   
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
    //declare a third array which has size equal to size of both arrays 
    int des[n+m];
    int unionSize = 0; // Tracks the current index of the des array
    
    //  Copy all elements of the first array into the des array
    for(int i = 0; i < n; i++) {
        des[unionSize] = arr1[i];
        unionSize++;
    }
    
    for(int i = 0; i < m; i++) {
        int isDuplicate = 0;
        
        // Check if arr2[i] already exist in des 
        for(int j = 0; j < unionSize; j++) {
            if(arr2[i] == des[j]) {
                isDuplicate = 1; 
                break;           
            }
        }
        
        // If it is not a duplicate, add it to the union array
        if(isDuplicate == 0) {
            des[unionSize] = arr2[i];
            unionSize++;
        }
    }
    
    // Print the final union array
    printf("Union of the two arrays: ");
    for(int i = 0; i < unionSize; i++) {
        printf("%d ", des[i]);
    }
    printf("\n");
    
    

    return 0;

}
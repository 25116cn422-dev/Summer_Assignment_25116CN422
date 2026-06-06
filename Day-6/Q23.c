//program to count set bits in a number
#include <stdio.h>
int countSetBits(int n){
    int count=0;
    while(n>0){
        //this clears the lowest set bit
        n=n&(n-1);
        count++;
    }
    return count;
}
int main(){
    int num;
    printf("enter an integer:");
    scanf("%d",&num);
    printf("number of set bits :%d\n",countSetBits(num));
    return 0;

}
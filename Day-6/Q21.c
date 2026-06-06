//program to convert decimal to binary
#include<stdio.h>
int binary(int decimal){
   int remainder,base=1,Binary=0;
   while(decimal!=0){
    remainder=decimal%2 ;//get remainder by dividing by 2
    decimal/=2; //dividing number by 2
    Binary+=remainder*base;
    base=base*10;
   }
   printf("binary nunber:%d",Binary);

}
int main(){
    int n;
    printf("Enter a decimal number:");
    scanf("%d",&n);
    binary(n);
    return 0;
}
#include<stdio.h>
int main(){
    int arr[]={0,1,2,3,4};
    int i,*p;
    for(p=arr,i=0;p+i<=arr+4;i++)
    printf("%d,*(p+i)");
}
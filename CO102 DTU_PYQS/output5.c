#include<stdio.h>
int main(){
    int arr[]={2,3,4,5,6};
    int i,*p;
    for(p=arr,i=0;p+i<=arr+4;p++,i++){
        printf("%d",*(p+i));
    }
}
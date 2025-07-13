#include<stdio.h>

int fun (int n){
    if (n==0){
        return 0;
    }
    else{
        return (n*(n+1))/2;
    }
}
int main(){
    fun(5);
    printf("%d ",fun(5));
}
#include<stdio.h>
int fun(int n){
    if(n==0){
        return 1;
    
    }
    else {
        return fun(n-1)*n;

    }
}
int main(){
    fun(5);
    printf("%d ",fun(5));
    return 0;
}


#include<stdio.h>
int pow(int m,int n){
    if (n==0){
        return 1;
    
    }
    else {
        return pow(m,n-1)*m;
    }
}
int main(){
    pow(2, 5);
    printf("%d ", pow(2,5));
    return 0;
}
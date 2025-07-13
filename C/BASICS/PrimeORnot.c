#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    bool Is_prime=true;
    for(int i=2; i<=n/2; i++){
        if(n%i==0){
            Is_prime=false;
            break;
        }
    }
    if(n==0 || n==1){
        printf("%d is Not a prime Number\n",n);
    }
    else if(Is_prime==true){
        printf("%d is a prime number\n",n);

    }
    else{
        printf("%d is not a prime number\n",n);
    }
}
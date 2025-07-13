#include<stdio.h>
int main(){
    int n,sum=0;
        printf("Enter a number: ");
    scanf("%d",&n);
    int temp=n;
    while (n>0)
    {
        int r=n%10;
        int c=r*r*r;
        sum=sum+c;
        n=n/10;
    }
        n=temp;
    if (n==sum){
        printf("%d is an Armstrong number",n);
    }
    else{
        printf("%d is not an Armstrong number",n);
    }
    
}
#include<stdio.h>
int main(){
    int m;
    int sum=0;
    int n;
    
    printf("Enter a number: ");
    scanf("%d",&n);
    
    while(n>0){
        m=n%10;
        sum=sum+m;
         n=n/10;
    }
    printf("The sum of digits is: ");
    printf("%d",sum);
    return 0;
}
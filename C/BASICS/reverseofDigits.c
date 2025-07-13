#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the Digits: ");
    scanf("%d",&n);
    while (n>0)
    {
       int r=n%10;
        sum=sum*10+r;
        n=n/10;
              
    }   
     printf("The reverse of the digits is : %d",sum);
                    
    return 0;
}
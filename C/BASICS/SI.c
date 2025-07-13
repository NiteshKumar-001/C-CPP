#include<stdio.h>
int main(){
    float p,r,t;
    printf("Enter the principle amount: ");
    scanf("%f",&p);
    printf("Enter the rate of interest: ");
    scanf("%f",&r);
    printf("Enter the time(In years): ");
    scanf("%f",&t);
    printf("The simple interest is: %.2f",(p*r*t)/100);
    return 0;
    }
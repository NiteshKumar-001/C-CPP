#include<stdio.h>
int main(){

    char op;
    printf("Enter the operator(+,-,*,/):");
    scanf("%c",&op);

    int n1;
    printf("Enter the first number:");
    scanf("%d",&n1);
   
    int n2;
    printf("Enter the second number:");
    scanf("%d",&n2);

    switch(op){
        case '+':
        printf("Result:%d.\n",n1+n2);
        break;
        case '-':
       printf("Result:%d.\n",n1-n2);
        break;
        case '*':
        printf("Result:%d.\n",(n1*n2));
        break;
        case '/':
        if(n2!=0){
             printf("Result:%d.\n",(n1/n2));
        }
        else{
             printf("Error!, Divisible by zero.\n");
        }
        break;
        default:
             printf("Invalid operator.\n");

    }
    return 0;
}
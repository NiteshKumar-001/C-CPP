#include<stdio.h>
#include<math.h>

int main(){
    float power, result;
    printf("Enter the input that you wanted to raise to e:");
    scanf("%f",&power);
    result= exp(power);
    printf("e^%f=%f",power , result);
    return 0;

}
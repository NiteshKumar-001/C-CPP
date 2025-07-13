#include<stdio.h>
int main()
{int sum=0,start=121,end=232;
    for(int i=start;i<=end && i<start+10;i++){
        sum=sum+i;
    }
    printf("The sum of numbers from %d to %d is : %d",start,start+9,sum);
    return 0;
}
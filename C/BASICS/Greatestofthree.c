#include <stdio.h>
int main()
{
int a[3];
int greatest,i;
printf("Enter three numbers:\n");
for (i = 0; i < 3; i++)
{
scanf("%d", &a[i]);
}
greatest = a[0];
for (i = 0; i < 3; i++)
{
if (a[i] > greatest)
{
greatest = a[i];
}
}
printf("\nGreatest of three numbers is %d", greatest);
return 0;
}
#include <stdio.h>
int main()
{
int a[10];
int greatest,i;
printf("Enter ten numbers:\n");
for (i = 0; i < 10; i++)
{
scanf("%d", &a[i]);
}
greatest = a[0];
for (i = 0; i < 10; i++)
{
if (a[i] > greatest)
{
greatest = a[i];
}
}
printf("\nGreatest of ten numbers is %d", greatest);
return 0;
}
#include <stdio.h>
int main()
{
int num, i, low, mid, high, arr[10], c=0, pnum=0;
printf("Enter the 10 numbers in array sortly\n");
for(i = 0 ; i < 10 ; i++)
{
scanf("%d", &arr[i]);
}
printf("Enter the number you want to search\n");
scanf("%d", &num);
low = 0;
high = 9;
while(low <= high)
{
mid = (low + high) / 2;

if(arr[mid] == num)
{
pnum = mid+1;
break;
}
if(arr[mid] < num)
{
low = mid + 1;
}
if(arr[mid] > num)
{
high = mid - 1;
}
}
if(pnum != 0)
{
printf("The number is present at index %d", pnum);
}
else
{
printf("The number is NOT present in this array");
}
return 0;

}
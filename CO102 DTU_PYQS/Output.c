#include<stdio.h>
int main()
{
    static char s[]="c it for yourself";
    int i=0;
    while(s[i])
    { if (s[i]!=' ')
    s[i]=s[i]+1;
    i++;
    }
    printf("%s,s");
}
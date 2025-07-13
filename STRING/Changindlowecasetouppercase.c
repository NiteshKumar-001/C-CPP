#include<stdio.h>

int main(){
    char name[]="NITESH";
     for (int i=0;name[i]!='\0';i++)

     if(name[i]>=65 && name[i]<=90)
     name[i]+=32;
     else if(name[i]>=97 && name[i]<'z')
     name[i]-=32;
     
     printf("%s",name);
     return 0;
}
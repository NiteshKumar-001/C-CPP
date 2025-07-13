#include<stdio.h>

int main(){
    char A[]="How are you?";
    int i, word=1;
    for (int i=0;A[i]!='\0';i++)

    if (A[i]==' ' && A[i-1]==' '){
     word ++;
    }
     printf("The number of words in the given string is: %d\n",word);
     return 0;
}
#include <stdio.h> 
#include <string.h>

int string_length(char* str) 
{ 
	int len = 0; 

		while (*str != '\0') { 
		len++; 
		str++; 
	} 

	return len; 
} 

int main() 
{ 
		char str[] = "Hello, world!"; 
	int length; 

		length = string_length(str); 

		printf("The length of the string is: %d \n", length);


        char myString[] = "Geeks";
    char myCharArray[20]; 
    
    strcpy(myCharArray, myString);

    printf("Copied string: %s\n", myCharArray); 

	return 0; 
}




    

    

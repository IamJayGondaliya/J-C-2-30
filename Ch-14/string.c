#include<stdio.h>
#include<string.h>

/*
	String:
	-------
		- Syntax:
			char strName[SIZE] = {'s', 't', 'r'};
			char strName[SIZE] = "My String";
			
		- Print:
			- String format specifier: %s			
			printf("String: %s",myStr);
			
	Null character:
	--------------
		- empty values of string are denotaed as null.
		- can be denotaed by: NULL / '\0'
			
*/

void main() {
	
	char str[20];
	int i;
	
	// Input
	printf("Enter string: ");
	// scanf("%s",&str);	// for single word
	// scanf("%[^\n]",&str);	// for multiple words -> for user input only
	gets(str);
	
	// Lower conversion
//	for(i=0; str[i] != NULL; i++) {
//		// Upper case
//		if(str[i] >= 65 && str[i] <= 90) {
//			str[i] += 32;
//		}
//	}

	strlwr(str);
	
	// Output
	printf("String: %s",str);
	
}

















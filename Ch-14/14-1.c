#include<stdio.h>

/*

		Array	=>	collection of integer values
		String	=>	collection of character values.
		
		Character:
			- DataType				=>	char
			- Format specifier		=>	%c
			- Size					=>	1 byte
			
		Compile:
			- Coding Language	->	Binary (0,1)
			
		ASCII values:
			- American Standard Code for Information Interchange
			- 1945
			- 128 Characters
			- A - Z		=>	65 - 90
			- a - z		=>	97 - 122
			- 0 - 9		=>	48 - 57
			
		Conversion:
			- UPPER	- lower		=>	+32
			- lower - UPPER		=>	-32

*/

void main() {
	int i;
	
	for(i=1; i<=128; i++) {
		printf("%d = %c\t",i,i);
	}
	
	char c;
	
	printf("Enter any character: ");
	scanf("%c",&c);
	
	//Toggle
	// Upper
	if(c>=65 && c<=90) {
		c += 32;
	}
	// Lower
	else if(c>=97 && c<=122) {
		c -= 32;
	}
	
	printf("Character: %c",c);
	
}

















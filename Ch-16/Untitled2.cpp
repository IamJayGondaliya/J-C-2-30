#include<stdio.h>

/*
	Variables:
		- stores the value.
		- Syntax:
			DataType varName = value;
		
	Function:	(UDF)
		- stores the process.
		- Syntax:
			ReturnType funName([DataType params,...]) {
				// Body
				Statements;
				[return value]
			}			

*/

// UDF
// Function defination
// TNRN
void info() {
	printf("This is the information about this software...\n");
}

void sum() {
	int a,b;
	
	printf("Enter a: ");
	scanf("%d",&a);
	
	printf("Enter b: ");
	scanf("%d",&b);
	
	printf("Sum of %d and %d: %d\n",a,b,a+b);	
}


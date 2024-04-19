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
			
		- Entry gate	: Parameters
		- Exit gate		: Return value...
					

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

void sub() {
	int a,b;
	
	printf("Enter a: ");
	scanf("%d",&a);
	
	printf("Enter b: ");
	scanf("%d",&b);
	
	printf("Subtraction of %d and %d: %d\n",a,b,a-b);	
}

// TSRN
void sumOf(int a,int b) {
	printf("Sum: %d\n",a+b);
}

void subOf(int m,int n) {
	printf("Subtraction: %d\n",m-n);
}

// TNRS
void nothing() {
	printf("Start..\n");
	printf("End..\n");
	return;
}

float getPi() {
	return 3.14;
}

int getInt() {
	int n;
	printf("Enter value: ");
	scanf("%d",&n);
	return n;
}

// TSRS
int getMaxFrom3(int a, int b, int c) {
	
	return (a>b)
				? (a>c)
						? a
						: c
				: (b>c)
						? b
						: c;
}




















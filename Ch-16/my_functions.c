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

int getInt(char varName[]) {
	int n;
	printf("Enter %s: ",varName);
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

int getArrayElement(char arrayName[],int index) {
	int n;
	printf("Enter %s[%d]: ",arrayName,index);
	scanf("%d",&n);
	return n;
}

// Passing array in UDF
void arrayInput(int a[],int n) {	
	int i;
	
	for(i=0; i<n; i++) {
		a[i] = getArrayElement("a",i);
	}	
}

void displayArray(int a[],int n) {	
	int i;
	printf("Array elements: ");
	for(i=0; i<n; i++) {
		printf("%d ",a[i]);
	}
	printf("\n");
}

int getArraySum(int a[],int n) {
	int sum = 0, i;		
	for(i=0; i<n; i++) {
		sum += a[i];
	}	
	return sum;
}

// Nested functions
int getArrayAverage(int a[],int n) {	
	int avg = getArraySum(a,n) / n;
		
	return avg;	
}

/*
	Recursion:
		- Function calls itself.
		- It must be used with specific condition.
*/

void loop(int start, int end) {	// 3	10
	
	printf("%d\n",start);	//	1 2, .. 10
	start++;	// 11
	
	if(start <= end) {	// 11<=10 X
		loop(start,end);	// loop(3,10)
	}
}

// N sum
/*
	5	=>	5 + 4
	4	=>	4 + 3
	1	=>	1
*/

int getNsum(int n) {	// 5, 4, 3, 2, 1
	if(n<=1) {	// 5<=1, 4<=1, 3<=1, 2<=1, 1<=1
		return 1;
	}
	else {
		return n + getNsum(n-1);
		//	   5 + getNsum(4)				=>	5 + 10	=> 15
		//		   4 + getNsun(3)			=>	4 + 6	=> 10
		//			   3 + getNsum(2)		=> 	3 + 3	=> 6
		//				   2 + getNsum(1)	=>	2 + 1	=> 3
		//					   1
	}
}















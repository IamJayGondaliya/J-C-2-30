#include<stdio.h>

/*
		1D array excercizes..

		- Array sum
		- Merge two 1D array
		
			int a[5] = {1, 	2, 	3, 	4, 	5};
			//			0	1	2	3	4
			int b[3] = {6, 	7, 	8};
			//			0	1	2
			
			int c[8] = {1, 	2, 	3, 	4, 	5, 	6, 	7, 	8};
			//			0	1	2	3	4	5	6	7
			
		- sorting
			- ascending
			- descending		
*/

void main() {

	int s1, s2, s3;

	printf("Enter the size 1: ");
	scanf("%d",&s1);
	printf("Enter the size 2: ");
	scanf("%d",&s2);
	
	s3 = s1 + s2;

	int a[s1],b[s2],c[s3],i;

	// Input
	for(i = 0; i<s1; i++) {
		printf("Enter a[%d]: ",i);
		scanf("%d",&a[i]);
	}	
	for(i = 0; i<s2; i++) {
		printf("Enter b[%d]: ",i);
		scanf("%d",&b[i]);
	}

	// Merge
	for(i=0; i<s1; i++) {
		c[i] = a[i];
	}
	for(i=0; i<s2; i++) {
		c[i + s1] = b[i];
	}

	// Output
	printf("Array a: ");
	for(i = 0; i<s1; i++) {
		printf("%d ",a[i]);
	}
	printf("\n");
	printf("Array b: ");
	for(i = 0; i<s2; i++) {
		printf("%d ",b[i]);
	}
	printf("\n");
	printf("Array c: ");
	for(i = 0; i<s3; i++) {
		printf("%d ",c[i]);
	}
	printf("\n");
}





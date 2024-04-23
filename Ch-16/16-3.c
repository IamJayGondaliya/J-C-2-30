#include "my_functions.c"

void main() {	
	int n = getInt("array size");
	
	int a[n];
	
	arrayInput(a,n);
	
	displayArray(a,n);
	
	printf("Array average: %d", getArrayAverage(a,n));
}

#include "../Ch-16/my_functions.c"

void main() {
	
	int n = getInt("size of array");
	
	int a[n];
	
	arrayInput(a,n);
	
	// Pointer
	int *ptr;
	
	// Assign address
	ptr = &a;
	
	int i;
	
	for(i=0; i<n; i++) {		
		printf("a[%d]: %d\tP. Add[%d]: %u\tAdd[%d]: %u\n",i,*(ptr + i),i,ptr + i,i,&a[i]);
	}
	
}

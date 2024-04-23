#include "../Ch-16/my_functions.c"

/*

		Value		=>	*ptr
		Address		=>	ptr

*/

void main() {
	
	// Pointer declaration
	int *ptr;
	int n = getInt("any number"); // 25
	
	// Assign address
	ptr = &n;
	
	*ptr = 74;
	
	printf("Value\t: %d\n",n);
	printf("Value\t: %d\n",*ptr);
	printf("Address\t: %u\n",&n);
	printf("Address\t: %u\n",ptr);
	printf("P. Add\t: %u\n",&ptr);
	
}

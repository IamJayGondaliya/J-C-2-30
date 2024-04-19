#include "my_functions.c"

void main() {		
	int a = getInt();
	int b = getInt();
	int c = getInt();
	
	int max = getMaxFrom3(a,b,c);
	
	printf("Max: %d\n",max);
}


#include "../Ch-16/my_functions.c"

void main() {
	
	int a = getInt("a");
	int b = getInt("b");
	
	swap(&a,&b);
	
	printf("Inside main\n");
	printf("a: %d\nb: %d\n",a,b);
	
}

#include "../Ch-16/my_functions.c"

/*
		Scale of pointer:
		Pointer with array:
		ptr	+ 0	=>	a[0]	=>	6541
		ptr + 1	=>	a[1]	=>	6545
		ptr + 2	=>	a[2]	=>	6549
		-----------------------------
		Pointer of array:
		p[0] = &a[0]
		p[1] = &a[1]
		p[2] = &a[2]
*/

void main() {
	
	int a = getInt("any number");
	
	int *p1 = &a;
	int **p2 = &p1;	
	
	printf("a\t: %d\np1\t: %d\np2\t: %d\n",a,*p1,**p2);
	
	**p2 = getInt("pointer 2");	
	
	printf("a\t: %d\np1\t: %d\np2\t: %d\n",a,*p1,**p2);
	
}





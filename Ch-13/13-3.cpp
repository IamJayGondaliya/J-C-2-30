#include<stdio.h>

/*
	1D array:
		- collection of integer values.
	2D array:
		- collection of 1D arrays.
		- Syntax:
		
			int arrayName[rowSize][columnSize] = { {val,.. }, {val,.. }, };
			
			rowSize		=>	num of 1D array
			coumnSize	=>	num of values in each 1D array
			
*/

int main() {
	
	int r,c;	
	
	printf("Enter row size\t\t: ");
	scanf("%d",&r);
	printf("Enter column size\t: ");
	scanf("%d",&c);
	
	int a[r][c],i,j;
	
	for(i=0; i<r; i++) {
		for(j=0; j<c; j++) {
			printf("Enter a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	//Matrix form
	//Outer loop	=>	row	=>	1D array
	for(i=0; i<r; i++) {
		//Inner loop	=>	column	=>	values
		for(j=0; j<c; j++) {
			//Diagonal
			if(i==j) {
				printf("%d ",a[i][j]);
			}
			else {
				printf("  ");
			}
		}
		printf("\n");
	}	
	
}













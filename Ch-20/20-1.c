#include<stdio.h>

void main() 
{
	
	// Open a file
	FILE *fp = fopen("demo.txt","a");
	
	// Validate a file
	if(fp == NULL)
	{
		printf("ERROR: Failled to open a file...");
	}
	else
	{
		// File operations here
		
		int i,n;
		
		printf("Enter any number: ");
		scanf("%d",&n);
		
		// Write into the file
		fprintf(fp,"N: %d\n",n);
		for(i=1; i<=10; i++)
		{
			fprintf(fp,"%d * %d = %d\n",n,i,n*i);
		}
		fprintf(fp,"============\n");
	}
	
	// Close a file
	fclose(fp);
}














#include<stdio.h>

void main() 
{
	
	// Open a file
	FILE *fp = fopen("data.txt","r");
	
	// Validate a file
	if(fp == NULL)
	{
		printf("ERROR: Failled to open a file...");
	}
	else
	{
		// File operations here		
		int a;
		char name[20];
		
		// Read from file
		fscanf(fp,"%s%d",&name,&a);
		
		printf("\t-:Data from file:-\nName: %s\nPrice: %d",name,a);
	}
	
	// Close a file
	fclose(fp);
}














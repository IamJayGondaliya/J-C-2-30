#include<stdio.h>

// Structure creation
struct User
{
	int u_id;			// 4
	char u_name[20];	// 20
	char u_dob[10];		// 10
};						// 34


// Union creation
union UserData
{
	int u_id;			
	char u_name[20];
	char u_dob[10];	
};

// Enumeration creation
enum Days {
	sun = 10, mon, tue, wed, thu, fri, sat	
};











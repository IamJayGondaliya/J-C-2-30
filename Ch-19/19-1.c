#include "lib.c"

void main() {
	
	printf("Enum: %d\n\n",fri);
	
	// Structure object(variable)
	struct User u[5];
	
	printf("Enter id\t: ");
	scanf("%d",&u[0].u_id);
	printf("Enter name\t: ");
	scanf("%s",&u[0].u_name);
	printf("Enter DOB\t: ");
	scanf("%s",&u[0].u_dob);
	
	printf("Id\t: %d\n",u[0].u_id);
	printf("Name\t: %s\n",u[0].u_name);
	printf("DOB\t: %s\n",u[0].u_dob);
	
}

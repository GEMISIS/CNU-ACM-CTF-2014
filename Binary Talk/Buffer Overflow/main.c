#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	char real_password[8] = "monkey1\0";
	char password[8];

	printf("Enter the 7 character password:");
	gets(password);
	password[7] = '\0';

	if(!strcmp(password, real_password))
	{
		printf("Success\n%s\n%s\n", real_password, password);
	}
	else
	{
		printf("Wrong password!\n%s\n%s\n", real_password, password);
	}
	return 0;
}
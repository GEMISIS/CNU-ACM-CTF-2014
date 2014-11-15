#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void getUser(char* username)
{
	strcpy(username, "noone");
}

int main(int argc, char* argv[])
{
	char username[16];
	char message[32];

	getUser(username);

	printf("Hello %s!\n", username);
	printf("Enter a 32 letter message for your birthday:");
	gets(message);

	if(!strcmp(username, "root"))
	{
		printf("You got a flag!");
	}
	else
	{
		printf("Message set to %s!", message);
	}
	return 0;
}
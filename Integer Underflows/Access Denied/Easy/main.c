#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	unsigned char realAccess = 0;
	int access = 0;

	printf("Please select the privleges you'd like to have:");

	if(scanf("%d", &access))
	{
		if(access > 32)
		{
			printf("Invalid access!  You must be root to have access above level 32!");
		}
		else
		{
			realAccess += access;
			if(realAccess > 32)
			{
				printf("Permissions bypassed!  The flag is ...");
			}
			else
			{
				printf("Permissions set!");
			}
		}
	}
	else
	{
		printf("Invalid access specified!");
	}
	return 0;
}
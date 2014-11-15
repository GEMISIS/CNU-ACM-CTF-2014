#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void phoneHome()
{
	printf("Phoning home!  The flag is...");
}

void phoneFriend()
{
	printf("Phoning friend!");
}

void makeCall()
{
	char number[4];

	gets(number);
}

int main(int argc, char* argv[])
{
	makeCall();
	printf("%d\n%d\n", phoneHome, phoneFriend);
	return 0;
}
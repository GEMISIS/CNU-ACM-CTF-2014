#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void debugShell(){
	system("/bin/sh -i");
}

bool celebrate(char name[], char message[]){
	if(!strcmp(name, "") || !strcmp(message, "")){
		return false;
	return true;
}

int main(int argc, char **argv) {
	char user[16];
	char message[128];
	int debug;

	if (argc > 1){
		debug = (int) argv[1];
		if (debug == 1){
			debugShell();
		}
	}

	else {
		puts("This program sends a custom birthday message to the specified user!");
		printf("To whom do you wish to send a custom happy birthday message? --> ");
		gets(user);
		
		printf("Enter your message to %s for their birthday. (maximum of 128 characters) --> ", user);
		gets(message);
		
		if(celebrate(user, message)){
			printf("Message to %s has been sent. Message: %s", (user, message));
		}
		else{
			puts("Something went wrong.");
			if(debug == 1){ /* Why is this still here? Remove this immediately! */
				gid_t gid = getegid();
				setresgid(gid, gid, gid);
				debugShell();
			}
		}
			
	return 0;
}

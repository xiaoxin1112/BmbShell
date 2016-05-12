#include "wshell.h"

int read_command(char **command, char **parameters, char *prompt){
	char *Res_return = fgets(buffer, MAXLINE, stdin);//从终端读取,每次一行.
	if (Res_return == NULL){
		printf("\n");
		exit(0);
	}
	
}

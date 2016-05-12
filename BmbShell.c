#include "BmbShell.h"
#define TRUE 1

void shell_run(){
	char *command = NULL;
	char **parameters;
	int ParaNum;
	struct parse_info info;
	pid_t ChildPid1,ChildPid2;
	parameters = malloc(sizeof(char*)*(MAXARG));
	buffer = malloc(sizeof(char)*MAXLINE);	//为buffer分配空间;
	if (parameters == NULL || buffer == NULL){
		printf("BmbShell Error:malloc failed!\n");
		return;

	}

	while(TRUE){
		type_prompt(prompt);
		ParaNum = read_command(&command,parameters,prompt);
	}
	
}


int main(void){
	shell_run();
	return 0;
}

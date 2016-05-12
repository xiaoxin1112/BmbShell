/*****************************************
	Filename: BmbShell.h
	Description:
		version: 1.0
		Created: 2016.5.12 10:00
		Author : shixingbo, shixingbo@sia.cn
		School : SIA
******************************************/
#include
#define MAXLINE	4096 //exec可执行参数的最大字节数
#define MAXARG	20   //命令行参数个数

struct	parse_info;
char	*buffer;	//接收终端输入

void type_prompt(char*);
int  read_command(char **, char*);
int  parsing(char**,int,struct parse_info*);
void shell_run(void);

struct parse_info {
	int flag;
//	char *command2;	
	char **parameters;
}; 		

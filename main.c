#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str[4];
	int i=0;
	str[0]='a';
	str[1]='b';
	str[2]='c';
	str[4]='\0';
	
	printf("%s\n",str);

	while(str[i]!='\0'){
		printf("%c",str[i]);
		i++;
	}
	return 0;
}

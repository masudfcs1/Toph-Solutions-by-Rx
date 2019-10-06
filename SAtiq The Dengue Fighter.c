#include <stdio.h>
#include<string.h>

int main() {
	
	char s[110],s1[]="Fever";
	gets(s);
	
	if(strcmp(s,s1))
		printf("Go to hospital.");
			   else
			   printf("Go to hospital right now.");
	
	
	return 0;
}

//program 90.
#include<stdio.h>
int main()
{
	char string[50];
	int i, count=0;
	
	
	printf("ENTER THE STRING:");
	gets(string);
	
	char *ptr=string;
	
	for(i=0; *(ptr+i)!='\0'; i++)
	{
		count++;
	}
	printf("\n Length of the string is:%d", count);
	
	return 0;
}

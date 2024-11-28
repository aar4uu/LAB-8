//PROGRAM 93
#include<stdio.h>
#include<string.h>
int main()
{
    char string[100]; // declaration of string
    
    printf("Enter the string: "); 
    gets(string);

    char *ptr = string; //declaration of pointer to store memory address of string
    int wordcount =0; 

    if(strcmp(string,"") != 0) //case for no word
    {

    while(*ptr != '\0')
    {
        if(*ptr == ' ' || *ptr == '\n' || *ptr == '\0')
        {
            wordcount++;
        }
        ptr++;
    }
            wordcount++;
    }
    printf("%d",wordcount);
    return 0;
}

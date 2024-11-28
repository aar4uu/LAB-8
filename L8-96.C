//PROGRAM 96
#include<stdio.h>
#include<string.h>

int main()
{   

     int N =5;
    char strings[5][100];
    strcpy(strings[0],"AARJU");
    strcpy(strings[1],"SHRADDHA");
    strcpy(strings[2],"ASMITA");
    strcpy(strings[3],"PARI");
    strcpy(strings[4],"LITISHA");


     char *ptr[5];//declaration of pointer array to store the strings
    char *temp;

    for(int i =0; i <N; i++)
    {
        ptr[i] = strings[i];
    }
    //sorting of strings using pointers
    for(int i =0; i < N; i++)
    {
        for(int j =i+1; j <N; j++)
        {
            if(strcmp(ptr[i],ptr[j])>0)
            {
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }




    for(int i =0; i <N; i++)
    {
        puts(ptr[i]);
    }
return 0;
}

//program 91
#include<stdio.h>
#include<math.h>
int main()
{
    int *ptr,n; 
    ptr =&n; // storing memory address of variable of n into ptr
    
    printf("Enter the number: ");
    scanf("%d",&n);
    //square and cube
    int square = pow(*ptr,2);
    int cube = pow(*ptr,3);
    
    printf("%d %d",square,cube);
    return 0;
}

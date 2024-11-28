//program 89
#include<stdio.h>
int main()
{
	int n;
	
	printf("Enter the size of an array:\n ");
	scanf("%d", &n);
	
	int arr1[10],arr2[10];
	int *a1ptr; 
	int *a2ptr; 
	
	a1ptr=arr1;
	a2ptr=arr2;
	
	printf(" \n Enter the elements of an array: \n ");
	for(int i=0; i<n; i++)
	{
		scanf("%d", &(*(a1ptr+i)));
	}
	
	for(int i=0; i<n; i++)
	{
		*(arr2+i)=*(arr1+n-1-i);
	}
	
	printf(" \n revered array-\n ");
	for(int i=0; i<n; i++)
	{
		printf("%d \n ", arr2[i]);
	}
	
	return 0;
	
	

	
}

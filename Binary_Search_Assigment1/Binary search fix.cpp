#include "stdio.h"

int main()
{
	int a,b,c,low,mid,high;
	
	printf("Enter the number of element : "); 
	scanf("%d", &a); 

	int array[a];
	
	printf("Enter %d integer :\n",a);
	for(b=0;b<a;b++)
		scanf("%d", &array[b]);
		printf("Enter the value to find: ");
		scanf("%d", &c);
	
	low=0;
	high=a-1;
	mid=(low+high)/2;
	
	while(low<=high)
	{
		if(array[mid]<c)
		low=mid+1;
		else if(array[mid]==c)
		{
			printf("%d found at the location %d",c,mid+1);
			break;
		}
		else 
		high=mid-1;
		mid=(low=high)/2;
	
	}
	if (low>high)
	printf("%d not found.", c);
	return 0;
}
	/*
		Note.
		First, we input number to make a limit, how much the lengh data that we want to make.
		Then Input the data as much as the data provided.
		And the last one, we search the data and the code will tell us where the data is stored.
		
	*/	
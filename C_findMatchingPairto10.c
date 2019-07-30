#include <stdio.h>

int arr[5];

void inefficient_approach(int * arr, int len)
{
	/* time complexity is quadratic */
	int i, j;

	for(i=0; i<len; i++)
	{
		for(j=i+1; j<len; j++)
		{
			if(arr[i] + arr[j] == 10)
			{
				printf("Found pair to form 10 -  (%d,%d)\n",arr[i],arr[j]);
			}
		}
	}
}


int main()
{
	int i, len;

	len = sizeof(arr)/sizeof(int);

	printf("Input data set, one number at a time, maximum 5 numbers:\n");
	for(i=0; i<len; i++) 
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Input set is:");
	for(i=0; i<len; i++) 
	{
		printf("\t%d",arr[i]);
	}
	printf("\n");	

	inefficient_approach(arr,len);
	return 0;
}

/* In place sort
 * Inefficient
 * Quadratic time complexity
 * Logic is, pick the smallest number from input list, put in the lowest possible index
 */

#include <stdio.h>

int input_set[5];


void PrintSet(int * arr, int len)
{
	int i;
	for(i=0 ; i<len; i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
}
void BubbleSort(int * in_set, int len)
{
	int i, j, temp;
	for(i=1 ; i<len; i++)
	{
		for(j=0; j<len-i ; j++)
		{
			if(in_set[j] > in_set[j+1])
			{
				temp = in_set[j];
				in_set[j] = in_set[j+1];	
				in_set[j+1] = temp;
			}
			printf("(i,j) = (%d,%d) :", i,j);
			PrintSet(in_set, len);
		}
	}
}

int main()
{
	int i, len;

	printf("Input numbers: \n");
	len = sizeof(input_set)/sizeof(int);

	for(i=0; i<len; i++)
	{
		scanf("%d",&input_set[i]);
	}
	
	printf("Unsorted Array : ");
	PrintSet(input_set, len);
	BubbleSort(input_set, len);
	return 0;
}


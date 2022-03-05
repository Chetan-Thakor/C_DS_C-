#include<stdio.h>

int main()
{
	int arr1[] = {7,4,2,1,8,9,10};
	int arr2[] = {5,3};
	int m, n, j=0, temp;    				// m is size of first array and n is size of second array
	m = sizeof(arr1) / sizeof(arr1[0]);
	n = sizeof(arr2) / sizeof(arr2[0]);
	printf("%d\n",m);
	printf("%d\n",n);
	
	for(int i=0; i<m; i++)
	{
		if(arr1[i] > arr2[0])
		{
			int temp;
			temp = arr1[i];
			arr1[i] = arr2[0];
			arr2[0] = temp;
			int first = arr2[0], k1;
			for(k1=1; k1 < n && arr2[k1] < first; k1++)
			{
				arr2[k1-1] = arr2[k1];
			}
			arr2[k1-1] = first;
		}
	}
	
	//printf("sorting of first array\n");
	
	for(int i=0; i<m; i++)
	{
		for(j = i+1; j<m; j++)
		{
			if(arr1[i] > arr1[j])
			{
				temp = arr1[i];
				arr1[i] = arr1[j];
				arr1[j] = temp;
			}
					
		}
		
	}
	printf("after merging first array is:\n");
	for(int p=0; p<m; p++)
	{
		printf("%d ",arr1[p]);
	}
	printf("\n");
	return 0;
}

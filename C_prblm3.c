//element exist or not in th given array

#include<stdio.h>
int main()
{
	int arr[10] = {1,5,4,8,9,2,0,6,11,7}, num, flag = 0;
	printf("Enter the number, whatever you want to find in array\n");
	scanf("%d",&num);
	printf("The number find process is going on\n");
	for(int i=0; i<10; i++)
	{
		if(arr[i] == num)
		{
			flag = 1;
			break;
		}	
	}
	if(flag == 0)
	{
		printf("No %d is not exist in the given array\n",num);
	}
	else
	{
		printf("Yes %d is exist in the given array\n",num);
	}
	printf("Array elements are:\n");
	for(int i=0; i<10; i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	return 0;
}


#include<stdio.h>

int main()
{
	int a[20], num, j;
	printf("Enter the number whatever, you want to find binary number from 1 to upto it\n");
	scanf("%d",&num);
	printf("\n");
	for(int i=1; i <= num; i++)
	{
		int k = i;
		for(j=0; k>0; j++)
		{
			a[j] = k % 2;
			k = k / 2;
		}
		for(j = j-1; j>=0; j--)
		{
			printf("%d",a[j]);
		}
		printf(" ");
			
	}
	printf("\n");
	return 0;
}

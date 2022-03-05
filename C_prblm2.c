#include<stdio.h>

int main()
{
	int maths, science, hindi;
	float total,percentage;
	printf("Enter the marks of student in maths\n");
	scanf("%d",&maths);
	printf("Enter the marks of student in science\n");
	scanf("%d",&science);
	printf("Enter the marks of student in hindi\n");
	scanf("%d",&hindi);
	total = total_marks(maths,science,hindi);
	printf("The total marks of student is:%d\n",total);
	percentage = per_student(total);
	printf("The total percentage of student is:%f%\n",percentage);
	return 0;
}

float total_marks(int a, int b, int c)
{
	return (a + b + c);
}

float per_student(float t)
{
	return (t * 100 / 300);
}

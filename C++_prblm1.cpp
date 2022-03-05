#include<iostream>
using namespace std;

class Employee
{
	public:
	
	int salary;
	float hours;
	
	void getInfo()
	{
		cout<<"The salary of Employee is:"<<salary<<endl;
		cout<<"The number of per day working hours of Employee is:"<<hours<<endl;
	}
	
	void AddSal()
	{
		if(salary <= 500)
		{
			salary = salary + 10;
		}
	}
	
	void AddWork()
	{
		if(hours > 6)
		{
			salary = salary + 5;
		}
	}
};

int main()
{
	Employee e1;
	cout<<"Enter the salary of employee"<<endl;
	cin>>e1.salary;
	cout<<"Enter the per day working hours of Employee"<<endl;
	cin>>e1.hours;
	e1.getInfo();
	e1.AddSal();
	e1.AddWork();
	e1.getInfo();
	return 0;
}

#include<iostream>
using namespace std;

class AddAmount
{
	int Amount=50;
	
	public:

	AddAmount()
	{
		
	}		
	
	AddAmount(int a)
	{
		Amount = Amount + a;
	}
	
	void disp_amount()
	{
		cout<<"The total amount in Piggie Bank is:"<<Amount<<endl;
	}
};
int main()
{
	int num;	
	cout<<"How many amount,do you want to add?"<<endl;
	cin>>num;	
	AddAmount a1(num);
	a1.disp_amount();
	return 0;
}

#include<iostream>
using namespace std;
class Matrix
{
	int rows, columns;
	int arr[5][5];
	
	public:
	
	Matrix()
	{
	
	}
	Matrix(int a, int b)
	{
		rows = a;
		columns = b;	
	}
	
	void get_row()
	{
		cout<<"The number of rows is:"<<rows<<endl;
	}
	
	void get_column()
	{
		cout<<"The number of columns is:"<<columns<<endl;
	}
	
	void set_element()
	{
		for(int i=0; i<rows; i++)
		{
			for(int j=0; j<columns; j++)
			{
				cin>>arr[i][j];
			}	
	
		}
	
	}

	void disp()
	{
		for(int i=0; i<rows; i++)
		{
			for(int j=0; j<columns; j++)
			{
				cout<<arr[i][j];
				cout<<"\t";
			}
			cout<<"\n";	
	
		}
	
	}

	Matrix operator +(Matrix a2)
	{
		Matrix c1(2,2);
		for(int i=0; i<rows; i++)
		{
			for(int j=0; j<columns; j++)
			{
				c1.arr[i][j] = arr[i][j] + a2.arr[i][j];	
			}	
	
		}
		return c1;
	}

	Matrix operator *(Matrix a3)
	{
		Matrix c2(2,2);
		for(int i=0; i<rows; i++)
		{
			for(int j=0; j<columns; j++)
			{
				c2.arr[i][j] = 0;
				for(int k=0; k<columns; k++)
				{
					c2.arr[i][j] = c2.arr[i][j] + arr[i][k] * a3.arr[k][j];
				}
					
			}	
	
		}
		return c2;
	}
};

int main()
{
	Matrix m1(2,2), m2(2,2), m3(2,2);
	cout<<"for first matrix"<<endl;
	m1.get_row();	
	m1.get_column();
	m1.set_element();
	cout<<"first matrix, elements are:"<<endl;
	m1.disp();
	cout<<"for second matrix"<<endl;
	m2.get_row();	
	m2.get_column();
	m2.set_element();
	cout<<"second matrix, elements are:"<<endl;
	m2.disp();
	cout<<"the addition of two matrix is:"<<endl;
	m3 = m1 + m2;
	m3.disp();
	cout<<"the multiplication of two matrix is:"<<endl;
	m3 = m1 * m2;
	m3.disp();
	return 0;
}

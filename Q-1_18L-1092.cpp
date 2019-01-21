#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter the number";
	cin>>a;
	
	for (int i = 1; i <= a; i++)
	{
		for (int j = 0; j < i; j++)
			cout << i;
		for (int j = 0; j < 2*(a-i); j++)
			cout << "*";
		for (int j = 0; j < i; j++)
			cout << i;

		cout << endl;
	}

	for (int i = 1; i < a; i++)
	{
		for (int j = 0; j < a-i; j++)
			cout << i + a;
		for (int j = 0; j < 2*i; j++)
			cout << "*";
		for (int j = 0; j < a- i; j++)
			cout << i + a;

		cout << endl;
	}
			

		
		
	



}
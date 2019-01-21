#include <iostream>
using namespace std;
int main()
{
	int x=0,y=0;
	int *p=nullptr;
	int*q=nullptr;
	x=10;
	y=5;
	p=&x;
	q=&y;
	cout<<"The value of x is ="<<x<<endl;
	cout<<"The value of y is ="<<y<<endl;
	cout<<"The value of p is ="<<p<<endl;
	cout<<"The value of q is ="<<q<<endl;
	cout<<"The value of *p is ="<<*p<<endl;
	cout<<"The value of *q is ="<<*q<<endl;
	int z;
	z=x;
	x=y;
	y=z;
	cout<<endl;
	cout<<"After using temp swapping"<<endl;
	cout<<"The value of x is ="<<x<<endl;
	cout<<"The value of y is ="<<y<<endl;
	cout<<"The value of p is ="<<p<<endl;
	cout<<"The value of q is ="<<q<<endl;
	cout<<"The value of *p is ="<<*p<<endl;
	cout<<"The value of *q is ="<<*q<<endl;
	int *r;
	r=p;
	p=q;
	q=r;
	cout<<endl;
	cout<<"After using temp2 swapping"<<endl;
	cout<<"The value of x is ="<<x<<endl;
	cout<<"The value of y is ="<<y<<endl;
	cout<<"The value of p is ="<<p<<endl;
	cout<<"The value of q is ="<<q<<endl;
	cout<<"The value of *p is ="<<*p<<endl;
	cout<<"The value of *q is ="<<*q<<endl;

}

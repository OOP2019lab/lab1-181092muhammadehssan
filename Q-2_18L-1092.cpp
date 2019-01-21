#include<iostream>
#include<fstream>
using namespace std;
int pow(int base,int power)
{
	int sum=1;
for(int i=0;i<power;i++)
{
	sum=sum*base;
}
return sum;
}

int main()
{
	ifstream fin;
	ofstream fout;
		int a=0;
	int times=0;
	int base=0;
	int power=0;
	fin.open("file.txt");
	fin>>times;
	for(int i=0;i<times;i++)
	{
		
	{
		fin>>base;
		fin>>power;
	}
	a=pow(base,power);
	cout<<a<<endl;
	}



}

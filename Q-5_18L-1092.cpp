#include<iostream>
#include<fstream>
using namespace std;
ofstream fout;
void sort(int *arr,int size)//sort in descending order
{
 int i, j,temp; 
   for (i = 0; i < size-1; i++)       
   {
       for (j = 0; j < size-i-1; j++)  
    {
		if (*(arr+j) < *(arr+j+1)) 
		{
			temp=*(arr+j);
			*(arr+j)=*(arr+j+1);
			*(arr+j+1)=temp;
		}
	   }
   }




}
void save_file(int *arr,int size)//save file
{
	fout.open("results_l181092.txt");
   for(int i=0;i<size;i++)
		fout<<*(arr+i)<<" ";
}

int main()
{
	
	int size;
	cout<<"Enter the size of array";
	cin>>size;
	int*arr = new int[size];//decllaration of dynamic array
	for(int i=0;i<size;i++)
		cin>>*(arr+i);
	sort(arr,size);//function call
 save_file(arr,size);//function call
   
	

}

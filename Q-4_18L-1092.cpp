#include<iostream>
using namespace std;
void sort(int *arr,int size)//sort in ascending order
{
 int i, j,temp; 
   for (i = 0; i < size-1; i++)       
   {
       for (j = 0; j < size-i-1; j++)  
    {
		if (*(arr+j) > *(arr+j+1)) 
		{
			temp=*(arr+j);
			*(arr+j)=*(arr+j+1);
			*(arr+j+1)=temp;
		}
	   }
   
   }}

int main()
{
	int size;
	cout<<"Enter the size of array";
	cin>>size;
	int*arr = new int[size];
	for(int i=0;i<size;i++)
		cin>>arr[i];
	
 sort(arr,size);//function call

   for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";

}
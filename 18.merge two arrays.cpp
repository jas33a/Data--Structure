//merging two arrays
#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int b[20];
	int c[30];
	cout<<"Enter values for array 1:"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter values for array 2:"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>b[i];
	}
	cout<<"Merge array is:"<<endl;
	for(int i=0;i<5;i++)
	{
		c[i]=a[i];
		c[i+5]=b[i];
	}
	for(int i=0;i<10;i++)
	{
		cout<<c[i]<<"\t";
	}
	
}

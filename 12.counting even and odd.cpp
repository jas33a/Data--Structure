//counting odd and even numbers in array
#include<iostream>
using namespace std;
int main()
{
	int arr[5],i,odd_count=0,even_count=0;
	for(int i=1;i<5;i++)
	{
		cout<<"Enter values"<<i<<": ";
		cin>>arr[i];
	}
	cout<<"Values are "<<endl;
	for(int i=1;i<5;i++)
	{
		cout<<arr[i]<<"  "<<endl;
	}
	for(i=1;i<5;i++)
	{
		if(arr[i]%2==1)
		odd_count++;
		else
		even_count++;
	}
	cout<<"Odd numbers are:"<<odd_count<<endl;
	cout<<"Even numbers are:"<<even_count;
}

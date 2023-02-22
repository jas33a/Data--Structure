//seprating odd and even numbers in seprate arrays
#include<iostream>
using namespace std;
int main()
{
	int arr[5],count;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter values"<<i+1<<": ";
		cin>>arr[i];
	}
	cout<<"Values are "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"  "<<endl;
	}
	 cout<<"odd numbers are: "<<endl;
	for(int i=0;i<5;i++)
{
	if(arr[i]%2!=0)
	{
		cout<<arr[i]<<endl;
	}
}

	 cout<<"even numbers are: "<<endl;
	for(int i=0;i<5;i++)
{
	if(arr[i]%2==0)
	{
		cout<<arr[i]<<endl;
	}
}
}

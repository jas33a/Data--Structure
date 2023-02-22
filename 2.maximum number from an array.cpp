//finding maximum of an array
#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	for(int i=0;i<5;i++)
	{
		cout<<"Enter values"<<i+1<<": ";
		cin>>arr[i];
	}
	cout<<"Values are ";
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"  ";
	}
	int max=arr[0];
	for(int i=1;i<5;i++)
	{
		
		if(max<arr[i])
		{
			max=arr[i];
			
		}
		
	}
	cout<<"Maximum value is: "<<max;
	return 0;
};

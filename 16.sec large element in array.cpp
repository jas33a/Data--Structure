//finding second large element in array
#include<iostream>
using namespace std;
int main()
{
	int arr[5],i,j,large,seclarge;
	for(int i=1;i<5;i++)
	{
		cout<<"Enter values"<<i<<": ";
		cin>>arr[i];
	}
	cout<<"Values are "<<endl;
	for(i=1;i<5;i++)
	{
		cout<<arr[i]<<endl;
	}
if(arr[0]<arr[1])
{
	large=arr[1];
	seclarge=arr[0];
}
else
{
	large=arr[0];
	seclarge=arr[1];
}
for( i=2;i<5;i++)
{
	if(arr[i]>large)
	{
		seclarge=large;
		large=arr[i];
	}
	else if(arr[i]>seclarge&&arr[i]!=large)
	{
		seclarge=arr[i];
	}
	}
cout<<"Second largest element is :"<<seclarge;	

}

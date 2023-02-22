//searching or identify number in an array
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
	bool flag;
	  
	  int t;
	for(int i=1;i<5;i++)
	{
		
		if(t=arr[i])
		{
			flag++;
			
		}
	}
	if(flag==1)
	{
	cout<<"Value found";	
	}
	else
	cout<<"Value not found";
	return 0;
};

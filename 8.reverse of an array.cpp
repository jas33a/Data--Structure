//reverse of an array
#include<iostream>
using namespace std;
int main()
{
	int arr[5],n;
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
  cout<<"reverse array is: "<<endl;
  

	for(int i=5-1;i>0;i--)
	{
		cout<<arr[i];
	}	

	return 0;
};


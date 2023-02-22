//finding largest number in 3 numbers
#include<iostream>
using namespace std;
int main()
{
		int arr[3];
	for(int i=0;i<3;i++)
	{
		cout<<"Enter numbers  "<<i+1<<": ";
		cin>>arr[i];
	}
	cout<<"Numbers are: "<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<arr[i]<<endl;
	}
	int larger=arr[0];
	for(int i=1;i<3;i++)
	{
		
		if(larger<arr[i])
		{
			larger=arr[i];
			
		}
	}
	cout<<"larger number is: "<<larger;
}

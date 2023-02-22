//total occurance of a number in an array
#include<iostream>
using namespace std;
int main()
{
	int arr[5],no;
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
	cout<<"Enter no for apperance";
	cin>>no;
	int count=0;
	
	  
	for(int i=0;i<5;i++)
	{
		
		if(no==arr[i])
		{
			count++;
			
		}
	
    }
    cout<<"Total apperance of number is    "<<count<<"\t";
	return 0;
};

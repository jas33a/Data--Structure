//sorting array in ascending order
#include<iostream>
using namespace std;
int main()
{
	int arr[5],i,j,temp;
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
	cout<<"ascending order:"<<endl;
	for(i=1;i<5;i++)
	for(j=i+1;j<5;j++)
	if(arr[i]>arr[j])
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	for(i=1;i<5;i++)
	cout<<arr[i]<<endl;
}

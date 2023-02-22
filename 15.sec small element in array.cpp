//finding second small element in array
#include<iostream>
using namespace std;
int main()
{
	int arr[5],i,j,small,secsmall;
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
small=secsmall=INT_MAX;
	for(i=0;i<5;i++)
	{
		if(arr[i]<small)
		{
			secsmall=small;
		small=arr[i];
	}
	else if(arr[i]<secsmall&&arr[i]!=small)
	{
		secsmall=arr[i];
	}
}
	cout<<"Second small number is:"<<secsmall;

}

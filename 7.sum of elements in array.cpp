//sum of elements or numbers in an array
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
	cout<<"Values are "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"  "<<endl;
	}
  cout<<"sum of the numbers are: "<<endl;
  int sum=0;
	for(int i=0;i<5;i++)
{
	sum=sum+arr[i];
}
cout<<"Sum is"<<"\t"<<sum;
	return 0;
};


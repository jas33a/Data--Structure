//check whether number is prime or not
#include<iostream>
using namespace std;
int main()
{
	int n,i,c=0;
	cout<<"Enter any number:";
	cin>>n;
	for (i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		cout<<n<<"is prime number";
	}
	else
	{
		cout<<n<<"is not prime number";
	}
	
}

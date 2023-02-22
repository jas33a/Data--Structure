//check whether number is negative,positive or zero
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number:";
	cin>>n;
	if(n<0)
	cout<<"Number is negative";
	else if(n==0)
	{
		cout<<"Number is zero";
	}
	else
	{
		cout<<"Number is positive";
	}

}

//check number is armstrong or not
#include<iostream>
using namespace std;
int main()
{
	int num,n,r ,sum;
	cout<<"Enter a number:";
	cin>>num;
	n=num;
	sum=0;
	{
	while(n!=0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n/=10;
	}
	if (sum==num)
	cout<<num<<"is armstrong number";
	else
	cout<<num<<"is not armstrong number";
}
}

//fibonacci series of n terms
#include<iostream>
using namespace std;
int main()
{
	int x,y,n,count,next;
	cout<<"How many terms required for displaying series:";
	cin>>n;
	x=0;
	y=1;
	cout<<"Fibonacci terms are:"<<endl;
	cout<<x<<"\t"<<y;
	count=2;
	while(count<n)
	{
		next=x+y;
		cout<<"\t"<<next;
		count++;
		x=y;
		y=next;
	}
	
}

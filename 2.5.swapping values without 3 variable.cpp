//swapping two numbers without third variable
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter two integers:";
	cin>>a>>b;
	cout<<"The original value in a="<<a<<"and b="<<b<<endl;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"The swapped value in a="<<a<<"and b="<<b;
}

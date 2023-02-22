//finding factorial of a number
#include<iostream>
using namespace std;
int main()
{
	int n,f,a;
	cout<<"Enter a number:";
	cin>>n;
	f=1;
	for(a=1;a<=n;a++)
	f=f*a;
	cout<<"Factorial is:"<<f;
}

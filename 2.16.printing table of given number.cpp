//print table of a given number
#include<iostream>
using namespace std;
int main()
{
	int n,a;
	cout<<"Enter a number to print its table:";
	cin>>n;
	for(a=1;a<=10;a++)
	cout<<n<<"*"<<a<<"="<<n*a<<endl;
}

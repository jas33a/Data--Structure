//finding  reverse of number
#include<iostream>
using namespace std;
int main()
{
	int n,x,y;
	cout<<"Enter a number:";
	cin>>n;
	x=n/100;
	n=n%100;
	y=n/10;
	n=n%10;
	cout<<"Number in reverse order is"<<n<<y<<x;
	
}

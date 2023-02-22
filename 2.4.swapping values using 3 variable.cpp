//swap two numbers with 3 variable
#include<iostream>
using namespace std;
int main()
{
	int x,y,temp;
	cout<<"Enter the first number:";
	cin>>x;
	cout<<"Enter the second number:";
	cin>>y;
	cout<<"Numbers are:"<<x<<","<<y<<endl;
	temp=x;
    x=y;
	y=temp;
	cout<<"Values after swapping:" "\n"<<x<<","<<y<<endl;
}

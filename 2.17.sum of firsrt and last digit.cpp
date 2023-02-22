//finding sum of first and last digit
#include<iostream>
using namespace std;
int main()
{
	int num,firstdigit,lastdigit,sum=0;
	cout<<"Enter a number for sum of first and last digit:";
	cin>>num;
	lastdigit=num%10;
	firstdigit=num;
	while (num>10)
	{
		num=num/10;
	}
	firstdigit=num;
	sum=firstdigit+lastdigit;
	cout<<"Sum of first and last digit is:  "<<sum;
}

//converting days to weeks,years and days
#include<iostream>
using namespace std;
int main()
{
	int days,years,weeks;
	cout<<"Enter days:";
	cin>>days;
	years=(days/365);
	weeks=(days%365)/7;
	days=days-((years*365)+(weeks*7));
	cout<<"YEARS:"<<years<<endl;
	cout<<"WEEKS:"<<weeks<<endl;
	cout<<"DAYS:"<<days<<endl;
	}

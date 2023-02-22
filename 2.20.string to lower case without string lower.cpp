//string to lower case without using string lower
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[100];
	int i;
	cout<<"Enter string:";
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A'&& str[i]<='Z')
		{
			str[i]=str[i]+32;
		} 
	}
	cout<<"String in lower case is:";
	puts(str);
}

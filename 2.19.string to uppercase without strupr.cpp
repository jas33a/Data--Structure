//string to upper case without using string upper
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[30];
	int i;
	cout<<"Enter string:";
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a'&&str[i]<='z')
		{
			str[i]=str[i]-32;
		}
	}
	cout<<"String in uppercase is:";
	puts(str);
}

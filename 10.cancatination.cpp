//using switch statment to execute 11 to 19 programs in  one program
#include<iostream> 
using namespace std;
int main()
{
	int n;
	cout<<"press 11 for odd&even integers in sepreate array"<<endl;
	cout<<"press 12 for odd&even integers in array"<<endl;
	cout<<"press 13 for ascending order"<<endl;
	cout<<"press 14 for decending order"<<endl;
	cout<<"press 15 for 2nd smallest element"<<endl;
	cout<<"press 16 for 2nd largest element"<<endl;
	cout<<"press 17 for for cheaking arrays are same or not"<<endl;
	cout<<"press 18 for merge array program"<<endl;
	cout<<"press 19 for max differ between two elements in array"<<endl;
	cout<<"Enter no from 11 to 19 for selection:"<<endl;
	cout<<"Enter number:";
	cin>>n;
	switch (n)
	{
		case 11:
			{
			cout<<" 11)for odd&even integers in sepreate array"<<endl;
			{
					int arr[5],count;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter values"<<i+1<<": ";
		cin>>arr[i];
	}
	cout<<"Values are "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"  "<<endl;
	}
	 cout<<"odd numbers are: "<<endl;
	for(int i=0;i<5;i++)
{
	if(arr[i]%2!=0)
	{
		cout<<arr[i]<<endl;
	}
}

	 cout<<"even numbers are: "<<endl;
	for(int i=0;i<5;i++)
{
	if(arr[i]%2==0)
	{
		cout<<arr[i]<<endl;
	}
	}
    break;
}
	case 12:
		{
		cout<<"12)for odd&even integers in array"<<endl;
		
	int arr[5],i,odd_count=0,even_count=0;
	for(int i=1;i<5;i++)
	{
		cout<<"Enter values"<<i<<": ";
		cin>>arr[i];
	}
	cout<<"Values are "<<endl;
	for(int i=1;i<5;i++)
	{
		cout<<arr[i]<<"  "<<endl;
	}
	for(i=1;i<5;i++)
	{
		if(arr[i]%2==1)
		odd_count++;
		else
		even_count++;
	}
	cout<<"Odd numbers are:"<<odd_count;
	cout<<"Even numbers are:"<<even_count;
}
	break;
	case 13:
		{
			cout<<"13)for ascending order"<<endl;
				int arr[5],i,j,temp;
	for(int i=1;i<5;i++)
	{
		cout<<"Enter values"<<i<<": ";
		cin>>arr[i];
	}
	cout<<"Values are "<<endl;
	for(int i=1;i<5;i++)
	{
		cout<<arr[i]<<"  "<<endl;
	}
	cout<<"ascending order:"<<endl;
	for(i=1;i<5;i++)
	for(j=i+1;j<5;j++)
	if(arr[i]>arr[j])
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	for(i=1;i<5;i++)
	cout<<arr[i]<<endl;
}
	break;

    case 14:
		{
		cout<<"14) for decending order"<<endl;
			int arr[5],i,j,temp;
	for(int i=1;i<5;i++)
	{
		cout<<"Enter values"<<i<<": ";
		cin>>arr[i];
	}
	cout<<"Values are "<<endl;
	for(int i=1;i<5;i++)
	{
		cout<<arr[i]<<"  "<<endl;
	}
	cout<<"descending order:"<<endl;
	for(i=1;i<5;i++)
	for(j=i+1;j<5;j++)
	if(arr[i]<arr[j])
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	for(i=1;i<5;i++)
	cout<<arr[i]<<endl;
}
 break;
    case 15:
    	{
    	cout<<"15)for 2nd smallest element"<<endl;
    		int arr[5],i,j,small,secsmall;
	for(int i=1;i<5;i++)
	{
		cout<<"Enter values"<<i<<": ";
		cin>>arr[i];
	}
	cout<<"Values are "<<endl;
	for(i=1;i<5;i++)
	{
		cout<<arr[i]<<endl;
	}
small=secsmall=INT_MAX;
	for(i=0;i<5;i++)
	{
		if(arr[i]<small)
		{
			secsmall=small;
		small=arr[i];
	}
	else if(arr[i]<secsmall&&arr[i]!=small)
	{
		secsmall=arr[i];
	}
}
	cout<<"Second small number is:"<<secsmall;

}
break;
case 16:
	{
	cout<<"16) 2nd largest element"<<endl;
		int arr[5],i,j,large,seclarge;
	for(int i=1;i<5;i++)
	{
		cout<<"Enter values"<<i<<": ";
		cin>>arr[i];
	}
	cout<<"Values are "<<endl;
	for(i=1;i<5;i++)
	{
		cout<<arr[i]<<endl;
	}
if(arr[0]<arr[1])
{
	large=arr[1];
	seclarge=arr[0];
}
else
{
	large=arr[0];
	seclarge=arr[1];
}
for( i=2;i<5;i++)
{
	if(arr[i]>large)
	{
		seclarge=large;
		large=arr[i];
	}
	else if(arr[i]>seclarge&&arr[i]!=large)
	{
		seclarge=arr[i];
	}
	}
cout<<"Second largest element is :"<<seclarge;	

}
break;
case 17:
	{
	cout<<"17)for cheaking arrays are same or not"<<endl;
	 int num1, num2, i , j, count = 0;
    cout<<"enter size of array 1 : ";
    cin>>num1;
    int arr1[num1];
    cout<<"enter elements of array 1 : ";
    for(i=0; i<num1; i++)
    {
        cin>>arr1[i];
    }
    cout<<"enter size of array 2 : ";
    cin>>num2;
    int arr2[num2];
    cout<<"enter elements of array 2 : ";
    for(i=0; i<num2; i++)
    {
    cin>>arr2[i];
    }
    for(i=0; i<num1; i++)
    {
        for(j=0; j<num2; j++)
        {
            if(arr1[i]==arr2[j])
            {
                count++;
                break;
            }
        }
    }
    if((count==num1)&&(count==num2))
    {
        cout<<"Arrays are same";
    }
    else
    {
        cout<<"Arrays are not same";
    }  
break;

}
case 18:
	{
	cout<<"18)for merge array program"<<endl;
		int a[10];
	int b[20];
	int c[30];
	cout<<"Enter values for array 1:"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter values for array:"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>b[i];
	}
	cout<<"Merge array is:"<<endl;
	for(int i=0;i<5;i++)
	{
		c[i]=a[i];
		c[i+5]=b[i];
	}
	for(int i=0;i<10;i++)
	{
		cout<<c[i]<<"\t";
	}
	
	}	
	break;
	case 19:
		{
		cout<<"19)for max differ between two elements in array"<<endl;
		int arr_size,arr[5];
	 int max_diff= arr[1]-arr[0];
  for (int i=0; i<arr_size; i++)
  {
    for (int j= i+1; j<arr_size; j++)
    {     
      if (arr[j]-arr[i] >max_diff) 
        max_diff=arr[j]-arr[i];
    } 
  }         
  return max_diff; 
{
	int maxDiff;
  int arr[] = {1, 2, 90, 10, 110};
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << "Maximum difference is " << maxDiff;
  
    }
}
break;
case 20:
	cout<<"invalid number";
}
}
}

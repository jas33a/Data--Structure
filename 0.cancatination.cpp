//use of switch statment for executing 1 to 9 programs in one program
#include<iostream> 
using namespace std;
int main()
{
	int n;
	cout<<"press 1 for min value program"<<endl;
	cout<<"press 2 for max value program"<<endl;
	cout<<"press 3 for searching  number"<<endl;
	cout<<"press 4 for occurance of number"<<endl;
	cout<<"press 5 for odd no program"<<endl;
	cout<<"press 6 for even no program"<<endl;
	cout<<"press 7 for find sum"<<endl;
	cout<<"press 8 to reverse an array"<<endl;
	cout<<"press 9 to find unique numbers"<<endl;
	cout<<"Enter no from 1 to 9 for selection:"<<endl;
	cout<<"Enter number:";
	cin>>n;
	switch (n)
	{
		case 1:
			{
			cout<<" For Min program"<<endl;
				int arr[5];
	for(int i=0;i<5;i++)
	{
		cout<<"Enter values"<<i+1<<": ";
		cin>>arr[i];
	}
	cout<<"Values are ";
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"  ";
	}
	int min=arr[0];
	for(int i=1;i<5;i++)
	{
		
		if(min>arr[i])
		{
			min=arr[i];
			
		}
	}
	cout<<"1)Minimum value is: "<<min;
    break;
}
	case 2:
		{
		cout<<"2)Max program"<<endl;
			int arr[5];
	for(int i=0;i<5;i++)
	{
		cout<<"Enter values"<<i+1<<": ";
		cin>>arr[i];
	}
	cout<<"Values are ";
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"  ";
	}
	int max=arr[0];
	for(int i=1;i<5;i++)
	{
		
		if(max<arr[i])
		{
			max=arr[i];
			
		}
	}
	break;
}
	case 3:
		{
			cout<<"3)check a number"<<endl;
				int arr[5];
	for(int i=0;i<5;i++)
	{
		cout<<"Enter values"<<i+1<<": ";
		cin>>arr[i];
	}
	cout<<"Values are ";
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"  ";
	}
	bool flag;
	  
	  int t;
	for(int i=1;i<5;i++)
	{
		
		if(t=arr[i])
		{
			flag++;
			
		}
	}
	if(flag==1)
	{
	cout<<"Value found";	
	}
	else
	cout<<"Value not found";

}
	break;

    case 4:
		{
		cout<<"4)occurance of a number"<<endl;
			int arr[5],no;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter values"<<i+1<<": ";
		cin>>arr[i];
	}
	cout<<"Values are ";
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"  ";
	}
	cout<<"Enter no for apperance";
	cin>>no;
	int count=0;
	
	  
	for(int i=0;i<5;i++)
	{
		
		if(no==arr[i])
		{
			count++;
			
		}
	
    }
    cout<<"Total apperance of number is    "<<count<<"\t";
}
 break;
    case 5:
    	{
    	cout<<"5)odd number program"<<endl;
    		int arr[5];
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
break;
}
case 6:
	{
	cout<<"6)Even number program"<<endl;
		int arr[5];
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
case 7:
	{
	cout<<"7)sum program"<<endl;
		int arr[5];
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
  cout<<"sum of the numbers are: "<<endl;
  int sum=0;
	for(int i=0;i<5;i++)
{
	sum=sum+arr[i];
}
cout<<"Sum is"<<"\t"<<sum;
break;
}
case 8:
	{
	cout<<"8)reverse program"<<endl;
		int arr[6],n;
	for(int i=1;i<6;i++)
	{
		cout<<"Enter values"<<i<<": ";
		cin>>arr[i];
	}
	cout<<"Values are "<<endl;
	for(int i=1;i<6;i++)
	{
		cout<<arr[i]<<"  "<<endl;
	}
  cout<<"reverse array is: "<<endl;
  

	for(int i=6-1;i>0;i--)
	{
		cout<<arr[i];
	}	
	break;
}

	case 9:
		{
		cout<<"9)unique element program"<<endl;
		 int array[100], temp[100];
    int n, i, j, count;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "\nEnter elements in array: ";

    for (i = 0; i < n; i++)
	 {
        cin >> array[i];
        temp[i] = -1;
    }
    for (i = 0; i < n; i++)
	 {
        count= 1;
        for (j = i + 1; j < n; j++)
		 {

            if (array[i] == array[j])
			 {
                count++;
                temp[j] = 0;
            }
        }
        if (temp[i] != 0)
		 {
            temp[i] = count;
        }
    }
    cout << "\nUnique elements present in the array are: ";
    for (i = 0; i < n; i++)
	 {
        if (temp[i] == 1)
		 {
            cout << array[i] << ",  ";
        }
    }
break;
}

default:
	cout<<"invalid number";
}
	
	
}

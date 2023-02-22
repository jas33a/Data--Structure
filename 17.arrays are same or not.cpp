//check whether arrays are same or not
#include <iostream> 
using namespace std;
int main()  
{
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
    return 0;
}   

#include <iostream>
using namespace std;

bool check(int arr[],int length);

int main()
{
    int length;
    cout << "Enter the number of elements you want to enter in array: ";
    cin >> length;
    int arr[length];
    cout << "Enter the values in array : "<<endl;
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }
    bool result=check(arr,length);
    cout<<"Result : "<<result<<endl;
    if(result==1)
    {
        cout<<"Arranged array: "<<endl;
        for(int i=0;i<length;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
}

bool check(int arr[],int length)
{
    int temp;
    bool result;
    for(int i=length-1;i>=0;i--)
    {
        for(int j=0;j<i;j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(int k=1;k<length;k++)
    {
        int x=k-1;
        int y=arr[x]+1;
        if(arr[k]==y)
        {
            result=true;
        }
        else
        {
            result=false;
            break;
        }
    }
    return result;
}
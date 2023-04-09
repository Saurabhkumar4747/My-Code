#include<iostream>
using namespace std;
void max(int arr[],int n)
{
    int max=INT8_MIN;
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    cout<<"Maximum element is:"<<max<<endl;
}
void min(int arr[],int n)
{
    int min=INT8_MAX;
    for(int i=0;i<n;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
     cout<<"Minimum element is:"<<min<<endl;
}
int main()
{
    int arr[5];
    cout<<"Enter your Array element:"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    max(arr,5);
    min(arr,5);
}
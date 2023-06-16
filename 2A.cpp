#include<iostream>
using namespace std;
void binary_search(int arr[],int n,int target)
{
    int start=0;
    int end=n-1;
    int ans;
    int count=0;
    while(start<end)
    {
        int mid = (start+end)/2;
        if(arr[mid]==target)
        {
            ans=mid;
            end=mid;
        }
        else if(arr[mid]>target)
        {
            end = mid-1;
        }
        else
        {
            start = mid+1;
        }
    }
    while(arr[ans]==target)
    {
        count++;
        ans++;
    }
    cout<<"the target is found in "<<count<<" times";
}
int main()
{
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter the element of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"enter the target:";
    cin>>target;
    binary_search(arr,n,target);
    return 0;
}

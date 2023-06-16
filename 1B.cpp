#include<iostream>
using namespace std;
void binary_search(int arr[],int n,int target)
{
    int start=0;
    int end=n-1;
    bool flag=false;
    int count=1;
    while(start<end)
    {
        int mid = (start+end)/2;
        if(arr[mid]==target)
        {
            flag=true;
            cout<<count<<endl;
            cout<<"Target is found "<<endl;
            break;
        }
        else if(arr[mid]<target)
        {
            count++;
            start=mid+1;
        }
        else{
            count++;
            end=mid-1;
        }
    }
    if(flag==false)
    {
        cout<<count<<endl;
        cout<<"Target not found";
    }
}

int main()
{
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter the elements in sorted order"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"enter the value which you want to search:";
    cin>>target;
    binary_search(arr,n,target);
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int t,n,i;
    cout<<"enter the no of test case:";
    cin>>t;
    while(t--)
    {
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter the elements in the array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"enter the key:";
    cin>>key;
    int count=0;
    for(i=0;i<n-1;i++)
    {
        for(int j=i+1;i<n;i++)
        {
            int ans= arr[i]-arr[j];
            if(abs(ans)==key)
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
    }
    return 0;
}

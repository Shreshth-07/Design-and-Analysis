#include<iostream>
using namespace std;
void linear_search(int arr[],int n, int target)
{
    bool flag = false;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target){
            flag=true;
            cout<<"element is found"<<endl;
            cout<<i+1<<endl;
            break;
        }
    }
        if(flag==false)
        {
            cout<<"element not found"<<endl;
        }
}
int main()
{
    int t;
    cout<<"enter the test case:";
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"enter the size of array:";
        cin>>n;
        int arr[n];
        cout<<"enter the element in the array:"<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int target;
        cout<<"enter the target:";
        cin>>target;
        linear_search(arr,n,target);
    }
    return 0;
}

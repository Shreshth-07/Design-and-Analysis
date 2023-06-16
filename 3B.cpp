#include<iostream>
using namespace std;
void selection_sort(int arr[],int n)
{
    int min=0;
    int swap=0;
    int comp=0;
    for(int i=0;i<n-1;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
        {
            comp++;
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
        int temp=arr[min];
        swap++;
        arr[min]=arr[i];
        arr[i]=temp;
    }
    cout<<"No. of comparision="<<comp<<endl;
    cout<<"Swaps="<<swap<<endl;
    cout<<"sorted array..."<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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
        cout<<"enter the element in the array"<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        selection_sort(arr,n);
    }
    return 0;
}

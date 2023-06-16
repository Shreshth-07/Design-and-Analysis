#include<iostream>
using namespace std;
void insertion_sort(int arr[],int n)
{
    int count=0;
    int shift=0;
    int comp=0;
    for(int i=0;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            comp++;
            arr[j+1]=arr[j];
            j=j-1;
        }
        count++;
        arr[j+1]=temp;
    }
    shift=count+comp;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"No. of comparision="<<comp<<endl;
    cout<<"shift="<<shift<<endl;
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
        insertion_sort(arr,n);
    }
}

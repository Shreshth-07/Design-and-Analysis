#include<iostream>
using namespace std;
void merge(int arr[],int start,int end, int mid)
{
    int len1 = mid-start+1;
    int len2 = end-mid;
    int left[len1];
    int right[len2];
    int index = start;
    for(int i=0;i<len2;i++)
    {
        left[i]=arr[start+i];
    }
    index = mid;
    for(int i=0;i<len2;i++)
    {
        right[i]=arr[mid+i+1];
    }
    int index1=0;
    int index2=0;
    index=start;
    while(index<len1 && index2<len2)
    {
        if(left[index1]<=right[index2])
        {
            arr[index++]=left[index1++];
        }
        else{
            arr[index++]=right[index2++];
        }
    }
    while(index1<len1)
    {
        arr[index++]=left[index1++];
    }
    while(index2<len1)
    {
        arr[index++]=right[index2++];
    }
}
void merge_sort(int arr[],int start,int end)
{
    if(start<end)
    {
        int mid=(start+end)/2;
        merge_sort(arr,start,mid);
        merge_sort(arr,mid+1,end);
        merge(arr,start,end,mid);
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
        cout<<"enter the element in the array"<<endl;
        for(int i=0;i<n;i++)
        {
       cin>>arr[i];
        }
        merge_sort(arr,0,n-1);
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==arr[i+1])
            {
                flag=1;
                cout<<"yes"<<endl;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"no"<<endl;
        }
    }
    return 0;
}

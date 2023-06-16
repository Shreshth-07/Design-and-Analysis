#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"enter the element in the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i,j,k;
    int sum=0;
    int count=0;
    for(i=0;i<n-1;i++)
    {
       for(j=i+1;j<n;j++)
       {
           sum = arr[i]+arr[j];
           for(k=0;k<n;k++)
           {
               if(arr[k]==sum)
               {
                   count++;
                   cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
               }
           }
       }
    }
    if(count==0)
    {
        cout<<"no sequence found";
    }
    return 0;
}

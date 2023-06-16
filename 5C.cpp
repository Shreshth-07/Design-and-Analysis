#include<bits/stdc++.h> 
using namespace std;
void printIntersection(int arr1[], int arr2[], int m, int n)
{ 
int i = 0, j = 0; 
while(i < m && j < n)
{
if(arr1[i] < arr2[j]) i++; 
else if(arr2[j] < arr1[i]) j++; 
else{
cout << arr2[j] << " "; 
i++; 
j++;
}
} 
} 
void inputArray(int arr[], int x)
{ 
for(int i = 0; i < x ; i++) cin >> arr[i];
} 
int main ()
{ 
int T; 
cin >> T; 
while(T--)
{ 
cout << "Enter size of 2 array" << endl; 
int m, n; 
cin >> m >> n; 
int arr1[m], arr2[n]; 
inputArray(arr1, m); 
inputArray(arr2, n); 
printIntersection (arr1, arr2, m, n); 
return 0; 
} 
return 0;
}

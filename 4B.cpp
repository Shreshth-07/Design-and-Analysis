#include <iostream>
using namespace std;
int comp = 0, swaps = 0;
void exchange(int* a, int* b) {
swaps++;
int temp = *a;
*a = *b;
*b = temp;
}
int partition(int arr[], int start, int end) {
int pivot = arr[end];
int i = start - 1;
for (int j = start; j < end; j++) {
comp++;
if (arr[j] <= pivot) {
i++;
exchange(&arr[i], &arr[j]);
}
}
exchange(&arr[i + 1], &arr[end]);
return i + 1;
}
void quickSort(int arr[], int start, int end) {
if(start < end) {
int q = partition(arr, start, end);
quickSort(arr, start, q - 1);
quickSort(arr, q + 1, end);
}
}
int main()
{
int T;
cout<<"Enter the test case: ";
cin >> T;
for (int t = 0; t < T; t++) {
comp = swaps = 0;
int size;
cout<<"Enter the array size: ";
cin >> size;
int arr[size];
for (int i = 0; i < size; i++) {
cin >> arr[i];
}
quickSort(arr, 0, size - 1);
cout << "\nComparisions: " << comp << endl;
cout << "\nSwaps: " << swaps << endl;
}
return 0;
}

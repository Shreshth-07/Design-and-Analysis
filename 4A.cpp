#include <iostream>
using namespace std;
int comp = 0;
void merge(int array[], int left, int mid, int right)
{
int subArrayOne = mid - left + 1;
int subArrayTwo = right - mid;
int *leftArray = new int[subArrayOne],
*rightArray = new int[subArrayTwo];
for (int i = 0; i < subArrayOne; i++)
leftArray[i] = array[left + i];
for (int j = 0; j < subArrayTwo; j++)
rightArray[j] = array[mid + 1 + j];
int indexOfSubArrayOne = 0,
indexOfSubArrayTwo = 0;
int indexOfMergedArray = left;
while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo]) {
comp++;
array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
indexOfSubArrayOne++;
}
else {
comp++;
array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
indexOfSubArrayTwo++;}
indexOfMergedArray++;
}
while (indexOfSubArrayOne < subArrayOne) {
array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
indexOfSubArrayOne++;
indexOfMergedArray++;
}
while (indexOfSubArrayTwo < subArrayTwo) {
array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
indexOfSubArrayTwo++;
indexOfMergedArray++;
}
}
void mergeSort(int array[], int begin, int end)
{
if (begin >= end)
return;
int mid = begin + (end - begin) / 2;
mergeSort(array, begin, mid);
mergeSort(array, mid + 1, end);
merge(array, begin, mid, end);
}
void printArray(int A[], int size)
{
for (int i = 0; i < size; i++)
cout << A[i] << " ";
}
int main()
{
int T;
cout<<"Enter the test case: ";
cin >> T;
for (int t = 0; t < T; t++) {
int size;
cout<<"Enter the size of array: ";
cin >> size;
int arr[size];
for (int i = 0; i < size; i++) {
cin >> arr[i];
}
mergeSort(arr, 0, size - 1);
cout << "\nSorted array is \n";
printArray(arr, size);
cout << "\nComparisions: " << comp << endl;
}
return 0;
}

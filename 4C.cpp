#include <iostream>
#include <random>
using namespace std;
void exchange(int* a, int* b)
{
int temp = *a;
*a = *b;
*b = temp;
}
int partition(int arr[], int start, int end) {
int pivot = arr[end];
int i = start - 1;
for (int j = start; j < end; j++) {
if (arr[j] < pivot) {
i++;
exchange(&arr[i], &arr[j]);
}
}
exchange(&arr[i + 1], &arr[end]);
return i + 1;
}
int randomized_partition(int arr[], int start, int end) {
int range = end - start + 1;
int i = (rand() % range) + start;
exchange(&arr[end], &arr[i]);
return partition(arr, start, end);
}
int randomSelect(int arr[], int start, int end, int k) {
if (start == end) {
return arr[start];
}
int pivot = randomized_partition(arr, start, end);
int pivot_pos = pivot - start + 1;
if (pivot_pos == k) {
return arr[pivot];
}
else if (k < pivot_pos) {
return randomSelect(arr, start, pivot - 1, k);
}
else {
return randomSelect(arr, pivot + 1, end, k - pivot_pos);
}
}
int main()
{
int T;
cin >> T;
for (int t = 0; t < T; t++) {
int size;
cin >> size;
int arr[size];
for (int i = 0; i < size; i++) {
cin >> arr[i];
}
int k;
cout << "Enter k: ";
cin >> k;
cout << randomSelect(arr, 0, size - 1, k) << endl;
}
return 0;
}

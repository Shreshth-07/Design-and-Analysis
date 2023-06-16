#include <bits/stdc++.h>
using namespace std;
void two_sum(int arr[], int size, int key) {
sort(arr, arr + size);
int start = 0, last = size - 1;
while (start < last) {
if (arr[start] + arr[last] == key) {
cout << arr[start] << " " << arr[last] << endl;
return ;
}
(arr[start] + arr[last] < key) ? start++ : last--;
}
cout << "Not found\n";
}
int main() {
int T;
cin >> T;
for (int t = 0; t < T; t++) {
int size;
cin >> size;
int arr[size];
for(int& x : arr) cin >> x;
int key;
cin >> key;
two_sum(arr, size, key);
}
return 0;
}

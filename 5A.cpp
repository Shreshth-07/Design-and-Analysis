#include <iostream>
using namespace std;
void duplicate(char arr[], int size) {
int count_arr[26] = {0};
for (int i = 0; i < size; i++) {
count_arr[int(arr[i]) - 97]++;
}
int max = count_arr[0];
char ans;
for (int i = 0; i < 26; i++) {
if (count_arr[i] >= max) {
max = count_arr[i];
ans = char(i + 97);
}
}
(max == 1) ? cout << "No Duplicates found\n" : cout << ans << " - " << max <<
endl;
}
int main() {
int T;
cin >> T;
for (int t = 0; t < T; t++) {
int size;
cin >> size;
char ch[size];
for (char& c : ch) cin >> c;
duplicate(ch, size);
}
return 0;
}

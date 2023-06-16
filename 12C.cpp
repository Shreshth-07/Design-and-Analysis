#include <bits/stdc++.h> 
using namespace std; 
void generatePermutationsHelper(string &str, int l, int r, vector<string> &ans)
{
if (l == r){
ans.push_back(str); 
return;
} 
for (int i = l; i <= r; i++)
{ 
swap(str[l], str[i]); 
generatePermutationsHelper(str, l + 1, r, ans); 
swap(str[l], str[i]);
}
} 
int main()
{ 
vector<string> ans;
string str = "aac";
int l = 0; int r = str.size() - 1; 
if(str.length()==0) 
cout<<"No Permutations Possible!!"; 
else 
generatePermutationsHelper(str, l, r, ans); 
sort(ans.begin(), ans.end()); 
for(int i = 0;i<ans.size();i++) 
cout<<ans[i]<<endl;
return 0;
}

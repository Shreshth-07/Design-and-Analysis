#include <bits/stdc++.h> 
using namespace std;
void prCharWithFreq(string s)
{
unordered_map<char, int> d;
for(char i : s)
{ d[i]++; }
for(char i : s)
{ if(d[i] != 0) { cout << i << d[i] << " "; d[i] = 0;
}
}
}
int main()
{ 
string s="billidogi"; prCharWithFreq(s);
}

#include <bits/stdc++.h>

using namespace std;

int main ()

{
  int t;
  cin>>t;
  while (t--)
  {
    string s;
    cin>>s;
    map<char,int> m;
    for (int i = 0; i < s.size(); i++)
    {
       m[s[i]]++;
    }
    int d=0,sin=0;
for(auto c:m)
{
     if(c.second%2==0)d++;
    else if(c.second%2==1)
    {sin++;
    if(c.second/2>=1)d++;}
}
// cout<<d<<" "<<sin<<endl;
if(d<2||sin>1)cout<<"NO"<<endl;
else cout<<"YES"<<endl;

  }
  


    return 0;
}
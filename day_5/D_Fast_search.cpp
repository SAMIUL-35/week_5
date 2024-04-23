#include <bits/stdc++.h>

using namespace std;

int main ()

{
  int n;
  cin>>n;
  vector<int>v(n);
  for (int i = 0; i < n; i++)
  {
    cin>>v[i];
  }
  sort(v.begin(),v.end());
   int t;
   cin>>t;
   vector<int>c;
   while (t--)
   {
    int l,r;
    cin>>l>>r;
    auto f=lower_bound(v.begin(),v.end(),l);
    auto k=upper_bound(v.begin(),v.end(),r);
    int count = k - f;
        
       c.push_back(count) ;

   }
   for(auto s:c)
   {
    cout<<s<<" ";
   }
cout<<endl;

    return 0;
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main ()

{
  ll t;
  cin>>t;
  while (t--)
  {
   ll n;
   cin>>n;
   int m= n*(n-1)/2;
   vector<ll>v(m);
   for (ll i = 0; i <m; i++)
   {
    cin>>v[i];
   }
   sort(v.begin(),v.end());
for(int i=0;i<m;i+=--n)cout<<v[i]<<' ';
        cout<<"1000000000\n";
  }
  


    return 0;
}
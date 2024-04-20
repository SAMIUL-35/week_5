#include <bits/stdc++.h>

using namespace std;

int main ()

{
  int t;
  cin>>t;
  while (t--)
  {
    long long n,c;
    cin>>n>>c;
    vector<long long>v(n);
for (long long i = 0; i < n; i++)
{
    cin>>v[i];
    v[i]=v[i]+i+1;
}
sort(v.begin(),v.end());
long long cnt=0;
for (long long i = 0; i < n; i++)
{
    if(c>=v[i])
    {
        cnt++;
        c-=v[i];
    }
}
cout<<cnt<<endl;
  }
  


    return 0;
}
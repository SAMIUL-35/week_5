#include <bits/stdc++.h>

using namespace std;

int main ()

{
  int n,k,r,t;
  cin>>n>>k>>r>>t;
  vector<int>v(n);
  vector<vector<int>>f;
  for (int i = 0; i < n; i++)
  {
    cin>>v[i];
  }
  int e=pow(2,n)-1;
for (int i = 0; i <= e; i++)
{
   vector<int>p;
   for (int j = 0; j < n; j++)
   {
    if((i>>j)&1)
    {
        p.push_back(v[j]);
    }
   }
   f.push_back(p);
}
int sum=0;
for(auto x:f)
{
    
    if(x.size()>=2)
   {
    long long ans=0;
    
    int mn=INT_MAX;
    int mx=INT_MIN;
     for (int i = 0; i < x.size(); i++)
     {
        
mn=min(mn,x[i]);
mx=max(mx,x[i]);
        // cout<<x[i]<<" ";

ans+=x[i];
        
     }
     cout<<endl;
if(ans>= k && ans<=r &&(mx-mn)>=t)sum++;
   }
}
cout<<sum<<endl;
    return 0;
}
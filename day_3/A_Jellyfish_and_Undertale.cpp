#include <bits/stdc++.h>

using namespace std;

int main ()

{
  int t;
  cin>>t;
  while (t--)
  {
    long long a,b,n;
    cin>>a>>b>>n;
    vector<long long>v(n);
    long long ans=b;
    for (long long i = 0; i < n; i++)
    {
        cin>>v[i];
        
       ans+=min(a-1,v[i]);
    }
    
    cout<<ans<<endl;
  }
  



    return 0;
}
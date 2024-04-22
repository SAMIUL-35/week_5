#include <bits/stdc++.h>

using namespace std;

int main ()

{
  int n,q;
  cin>>n>>q;
  vector<int>a(n);
  for (int i = 0; i < n; i++)
  {
    cin>>a[i];
  }
  sort(a.begin(),a.end());
 
  while (q--)
  {
   int s;
   cin>>s;
    int l=0;
    int r=n-1;
   bool ok=false;     
   while (l<=r)
   {
    int mid=(l+r)/2;
    if(a[mid]==s)
    {
        ok=true;
        break;
    }
    else 
    {
        if(a[mid]<s)l=mid+1;
    else r=mid-1;
    }
   }
   
if(ok)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
  }
  


    return 0;
}
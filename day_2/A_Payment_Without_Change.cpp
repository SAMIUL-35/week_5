#include <bits/stdc++.h>

using namespace std;

int main ()

{
  int t;
  cin>>t;
  while (t--)
  {
    int a,b,n,k;
    cin>>a>>b>>n>>k;
   
    
    if(k%n<=b&& 1ll* a*n+b>=k)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

  }
  


    return 0;
}
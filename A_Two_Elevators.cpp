#include <bits/stdc++.h>

using namespace std;

int main ()

{
  int t;
  cin>>t;
  while (t--)
  {
    int a,b,c;
    cin>>a>>b>>c;
    if(a==1) cout<<"1"<<endl;
    
    else 
    {
        int a_t=a-1;
        int b_t=abs(b-c)+abs(c-1);
        if(a_t<b_t)cout<<"1"<<endl;
        else if(a_t>b_t)cout<<"2"<<endl;
        else cout<<"3"<<endl;
    }
  }
  


    return 0;
}
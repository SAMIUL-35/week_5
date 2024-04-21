#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++)
{
cin>>v[i];
}
long long po=0;
 
for(int i=0;i<n;i++)
{
if(v[i]<0)
{
    
  
      
           if(abs(v[i])<=po)
           {
                po=po-abs(v[i]);
           }
       else po=0;
}
else if(v[i]>0) po+=v[i];
}
 
cout<<po<<endl;
}
 
return 0;
}
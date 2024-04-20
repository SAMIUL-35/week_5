#include <bits/stdc++.h>

using namespace std;

int main ()

{
  int n;
  cin>>n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
  {
    cin>>v[i];
  }
  int m;
  cin>>m;
  vector<int> f(m);

  for (int i = 0; i < m; i++)
  {
    cin>>f[i];
  }
  sort(v.begin(),v.end());
  sort(f.begin(),f.end());
  int cnt=0;
if(v.size()<f.size())
{
for (int i = 0; i < n; i++)
{
   for (int j = 0; j < m; j++)
   {
    if(v[i]==f[j] || v[i]+1==f[j]|| v[i]==f[j]+1)
    {
        cnt++;
        f[j]=0;
        break;
    }
   }
   
}

}
else {
    for (int i = 0; i < m; i++)
{
   for (int j = 0; j < n; j++)
   {
    if(f[i]==v[j] || f[i]+1==v[j]||f[i]==v[j]+1)
    {
        cnt++;
        v[j]=0;
        break;;
    }
   }
   
}
}
cout<<cnt<<endl;
    return 0;
}
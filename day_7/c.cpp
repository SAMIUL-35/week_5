#include <bits/stdc++.h>

using namespace std;


 int main()
 {
     int n;
     int even=0;
     int odd=0;
     scanf("%d",&n);
     int ar[n];
     for(int i=0;i<n;i++)
        {
        scanf("%d",&ar[i]);
        if(ar[i]%2 == 0 || (ar[i]%2 == 0 && ar[i]%3 == 0))
        even++;
        else if(ar[i]%2!=0 && ar[i]%3==0)
        odd++;
        }
    
       printf("%d ",even);
       printf("%d",odd); 
    
           
    return 0;
}